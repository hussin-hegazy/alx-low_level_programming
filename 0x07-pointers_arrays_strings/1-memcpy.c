#include "main.h"
/**
 * _memcpy - fills memory with another buffer.
 * @dest: source string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int z = 0
for (x = 0; x < n; x++)
{
*(dest + x) = *(src + x);
}
return (dest);
}
