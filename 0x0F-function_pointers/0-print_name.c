#include "main.h"

/**
 * print_name - function that prints a name.
 * @name: String
 * @f: Pointer to function with char parameter and no return
 *
 * Return:NA
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
