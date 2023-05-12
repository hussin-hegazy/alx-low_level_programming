#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
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
size_t red, wrt;
char *bf;
if (filename == 0)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
bf = malloc(sizeof(char) * letters);
if (bf == 0)
return (0);
red = read(fd, bf, letters);
if (red == -1)
return (0);
wrt = write(STDOUT_FILENO, bf, letters);
if (wrt == -1 || wrt != red)
return (0);
close(fd);
free(bf);
return (wrt);
}
