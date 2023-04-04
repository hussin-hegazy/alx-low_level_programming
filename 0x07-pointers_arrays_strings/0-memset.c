#include "main.h"
/**
* _memset - fills memory with another buffer.
* @s :A pointer to the block of memory to fill "*s"
* @b :The value to be set b
* @n :The number of bytes to be filled starting from the pointer
* Return: string.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;
for (x = 0; x < n; x++)
{
*(s + x) = b;
}
return (s);
}
