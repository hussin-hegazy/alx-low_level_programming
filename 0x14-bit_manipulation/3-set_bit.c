#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizef(*n) * 8)
return (-1);
*n |= (1 << index);
return (1);
}
