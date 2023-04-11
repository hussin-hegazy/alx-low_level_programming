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
char *xarray;
if (size == 0)
{
return (NULL);
}
xarray = malloc(sizeof(char) * size);
if (xarray == 0)
{
return (NULL);
}
for (y = 0; y < size; y++)
{
xarray[y] = c;
}
return (xarray);
}
