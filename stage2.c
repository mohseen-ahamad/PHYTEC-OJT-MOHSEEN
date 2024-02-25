#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <math.h>
#include "MQTTClient.h"

#define RELAY_PIN "/sys/class/gpio/gpio31/value"  // Replace with the actual GPIO pin

//MQTT SETTINGS
#define ACCESS_TOKEN "SUMcuWGc31jDxIqGoONE"
#define MQTT_ADDRESS "tcp://phyclouds.com:1884"
#define MQTT_CLIENTID "iiscSmartSwitch"
#define MQTT_TOPIC "v1/devices/me/telemetry"
#define MQTT_QOS 1

// Global MQTT client variable
MQTTClient client;
MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;

// Function to publish data to MQTT
void publishToMQTT(char *topic, char *payload)
{
    MQTTClient_message pubmsg = MQTTClient_message_initializer;
    pubmsg.payload = payload;
    pubmsg.payloadlen = strlen(payload);
    pubmsg.qos = 1;
    pubmsg.retained = 0;
    MQTTClient_deliveryToken token;

    MQTTClient_publishMessage(client, topic, &pubmsg, &token);
    MQTTClient_waitForCompletion(client, token, 1000);

    int rc = MQTTClient_waitForCompletion(client, token, 10000);

    if (rc == MQTTCLIENT_SUCCESS)
    {
	     // Print information about the published data
        printf("Published MQTT data - Topic: %s, Payload: %s\n", topic, payload);
    }
    else
    {
        fprintf(stderr, "Failed to publish file data. Return code: %d\n", rc);
    }
}

void error(const char *msg) {
    perror(msg);
    exit(1);
}

// function to set relay state 

void setRelayState(int state)
{
    FILE *fp = fopen(RELAY_PIN, "w");
    if (fp == NULL)
    {
        perror("Error opening relay pin");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "%d", state);  // Writing 0 turns the relay off, 1 turns it on
    fclose(fp);
}

int main() {
    // MQTT initialization
    MQTTClient_create(&client, MQTT_ADDRESS, MQTT_CLIENTID, MQTTCLIENT_PERSISTENCE_NONE, NULL);
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;
    conn_opts.username = ACCESS_TOKEN;

    if (MQTTClient_connect(client, &conn_opts) != MQTTCLIENT_SUCCESS)
    {
        fprintf(stderr, "Failed to connect to MQTT server\n");
        return -1;
    }

	
	// Assuming GPIO pin 31 is not exported, you might need to export it first
    FILE *exportFile = fopen("/sys/class/gpio/export", "w");
    if (exportFile == NULL) {
        error("Error exporting GPIO pin");
    }

    fprintf(exportFile, "31");
    fclose(exportFile);

    // Set the GPIO pin direction to out (for writing)
    FILE *directionFile = fopen("/sys/class/gpio/gpio31/direction", "w");
    if (directionFile == NULL) {
        error("Error setting direction for GPIO pin");
    fprintf(directionFile, "out");
    fclose(directionFile);

    while (1) {
        // Turn ON the relay (activate the connected device)
        setRelayState(1);
        printf("Relay is ON\n");
       // Publish the relay status to ThingsBoard
        char mqtt_payload[500];
        snprintf(mqtt_payload, sizeof(mqtt_payload), "{\"RelayStatus\": ON}");
        publishToMQTT(MQTT_TOPIC, mqtt_payload);
       	sleep(2);  // Wait for 2 seconds

        // Turn OFF the relay (deactivate the connected device)
        setRelayState(0);
        printf("Relay is OFF\n");
	snprintf(mqtt_payload, sizeof(mqtt_payload), "{\"RelayStatus\": OFF}");
        publishToMQTT(MQTT_TOPIC, mqtt_payload);
        sleep(2);  // Wait for 2 seconds
    }

    // Unexport GPIO pin 31 before exiting
    FILE *unexportFile = fopen("/sys/class/gpio/unexport", "w");
    if (unexportFile == NULL) {
        error("Error unexporting GPIO pin");
    }

    fprintf(unexportFile, "31");
    fclose(unexportFile);

    return 0;
}
}
