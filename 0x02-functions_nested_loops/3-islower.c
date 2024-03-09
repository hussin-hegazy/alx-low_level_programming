#include "main.h"

/**
 *_islower - Entry point
 *@c: hs a char
 *Return: 1 (sucssful)
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
