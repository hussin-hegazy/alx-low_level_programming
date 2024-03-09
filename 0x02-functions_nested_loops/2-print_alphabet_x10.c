#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	int j;

	while (j < 11)
	{
		int i;

		for (i = 0; i < 26; i++)

			_putchar(i + 'a');

		_putchar('\n');
		j++;
	}
}
