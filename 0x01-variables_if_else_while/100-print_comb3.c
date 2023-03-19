#include <stdio.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
int main(void)
{
	int n, i;

	for (n = 0; n < 10 ; n++)
	{
		for (i = n + 1; i < 10; i++)
		{
			putchar(n + '0');
			putchar(i + '0');
			if (n != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

