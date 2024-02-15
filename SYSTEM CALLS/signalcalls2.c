#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler for SIGUSR1
void sigusr1_handler(int signal) {
    printf("Received SIGUSR1\n");
    // Add your custom handling for SIGUSR1 here
}

// Signal handler for SIGUSR2
void sigusr2_handler(int signal) {
    printf("Received SIGUSR2\n");
    // Add your custom handling for SIGUSR2 here
}

int main() {
    // Register the signal handlers for SIGUSR1 and SIGUSR2
    signal(SIGUSR1, sigusr1_handler);
    signal(SIGUSR2, sigusr2_handler);

    printf("Signal handling program is running.\n");
    printf("You can send SIGUSR1 and SIGUSR2 signals using 'kill' command.\n");

    while (1) {
        // Your program logic goes here
        sleep(1);
    }

    return 0;
}

