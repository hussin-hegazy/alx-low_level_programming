#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: base 10 number
 * @index: index to set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * 8)
return (-1);
*n &= ~(1 << index);
return (1)
}
