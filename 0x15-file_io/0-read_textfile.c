#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads text file and prints to the POSIX std output
 * @filename: name of the file to read
 * @letters: number of the letters to print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int red, wrt;
char *bf;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd ==  -1)
return (0);
bf = malloc(sizeof(char) * letters);
if (bf == NULL)
return (0);
red = read(fd, bf, letters);
if (red == -1)
return (0);
wrt = write(STDOUT_FILENO, bf, red);
if (wrt == -1 || wrt != red)
return (0);
close(fd);
free(bf);
return (wrt);
}
