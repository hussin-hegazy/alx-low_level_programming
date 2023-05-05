#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * void: No argument
 *
 * Return: 0 if big endian, 1 if little endian
 *
 */
int get_endianness(void)
{
unsigned int nmm = 1, egg;
char *ptr = (char *)&nmm;
if (*ptr)
egg = 1;
else
egg = 0;
return (egg);
}
