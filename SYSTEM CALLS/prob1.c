#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    const char *filename = "data.txt"; // Name of the file to open
    int file_descriptor; // File descriptor
    char buffer[1024]; // Buffer for reading

    // Open the file in read-only mode
    file_descriptor = open(filename, O_RDONLY);

    if (file_descriptor == -1) {
        perror("Error opening file");
        exit(1); // Exit with an error code
    }

    // Read and display the contents of the file
    ssize_t bytes_read;

    while ((bytes_read = read(file_descriptor, buffer, sizeof(buffer))) > 0) {
        write(STDOUT_FILENO, buffer, bytes_read); // Write to console
    }

    // Close the file
    close(file_descriptor);

    return 0;
}

