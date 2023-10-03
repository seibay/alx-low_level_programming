#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * handle_error - Prints an error message and exits the program.
 * @code: The error code to exit with.
 * @message: The error message to print.
 */
void handle_error(int code, const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[]) {
    const char *file_from;
    const char *file_to;
    int fd_source;
    int fd_dest;
    char buffer[BUF_SIZE];
    ssize_t bytes_read, bytes_written;

    if (argc != 3) {
        handle_error(97, "Usage: cp file_from file_to");
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_source = open(file_from, O_RDONLY);
    if (fd_source == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    fd_dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_dest == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
        close(fd_source);
        exit(99);
    }

    while ((bytes_read = read(fd_source, buffer, BUF_SIZE)) > 0) {
        bytes_written = write(fd_dest, buffer, bytes_read);
        if (bytes_written == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
            close(fd_source);
            close(fd_dest);
            exit(99);
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error while reading from file %s\n", file_from);
        close(fd_source);
        close(fd_dest);
        exit(98);
    }

    if (close(fd_source) == -1 || close(fd_dest) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
        exit(100);
    }

    return 0;
}

