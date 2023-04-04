#include "main.h"
/**
*_memcpy- fills memory with another buffer. 
*@dest:New Source Series
*@src:packing string
*@n:Chain length
*Return: The new text string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int z = 0
for (z = 0; z < n; z++)
{
dest[z] = src[z];
}
return (dest);
}
