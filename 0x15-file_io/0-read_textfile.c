#include "main,h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 * 0 if file cannot be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t n_read, n_written;
    char *buffer;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    n_read = read(fd, buffer, letters);
    if (n_read == -1)
        return (0);

    n_written = write(STDOUT_FILENO, buffer, n_read);
    if (n_written == -1 || n_written != n_read)
        return (0);

    close(fd);
    free(buffer);
    return (n_written);
}
