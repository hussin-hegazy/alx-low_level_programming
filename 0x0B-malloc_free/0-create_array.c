#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes with.
 * a specific char
 * @size: size of array
 * @c: character to initialize with
 * Return: Pointer return (xarray).
 */
char *create_array(unsigned int size, char c)
{
int y;
char *x;
if (size == 0)
return (NULL);
x = malloc(sizeof(char) * size);
if (x == 0)
return (NULL);
for (y = 0; y < size; y++)
x[y] = c;
*(x + y) = '\0';
return (x);
}
