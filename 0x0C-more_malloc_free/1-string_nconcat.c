#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: n bytes of string 2
 *
 * Return: Pointer to allocated memory of s1 + nbytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	x = 0, y = 0;
	while (*(s1 + x))
		x++;
	while (*(s2 + y))
		y++;

	if (n < y)
		y = n;

	s = malloc(sizeof(char) * (x + y + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < x; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = x; i < y; j++, i++)
		*(s + j) = *(s2 + i);

	*(s + j) = '\0';

	return (s);
}
