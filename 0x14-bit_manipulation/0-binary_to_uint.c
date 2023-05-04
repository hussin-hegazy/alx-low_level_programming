#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int nmber = 0;
int y = 0;
if (!b)
return (0);
for (y; b[y]; y++)
{
if (b[y] != '0' && b[y] != '1')
return (0);
nmbr = nmbr * 2 + (b[i] - '0');
}
return (nmber);
}
