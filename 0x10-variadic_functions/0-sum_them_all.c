#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sums all arguments variadic
 * @n: Number of Arguments
 * @...: Arguments Variadic
 *
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list eg;

	if (n == 0)
		return (0);
	va_start(eg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(eg, int);

	va_end(eg);
	return (sum);
}
