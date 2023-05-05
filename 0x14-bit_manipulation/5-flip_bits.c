#include <stdio.h>
#include "main.h"
/**
 * flip_bits - sets the value of a bit to 1 at a given m
 * @n:n  number
 * @m: m to set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int count = 0;
while (x)
{
count += x & 1;
x >>= 1;
}
return (count);
}
