#include "main.h"
int _primo(int num_, int inf);

/**
 * is_prime_number - function that  returns 1 if the input integer is a prime.
 *@n: first value
 *
 * Return: Return solution
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (_primo(n, a));
}

/**
 *_primo - function that returns 1 if the input integer is a prime.
 *@x: first value
 *@y: second value
 *
 * Return: Return solution
 */
int calculo_primo(int x, int y)
{
	if (x / 2 < y)
		return (1);
	if (x % y == 0)
		return (0);
	return (_primo(x, y + 1));
}
