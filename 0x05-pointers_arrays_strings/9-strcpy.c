#include"main.h"
/**
	* _strcpy - Function description
	*
	* @src: Parameter description
	* @dest: Parameter description
	* Return: a pointer to the dest
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}

