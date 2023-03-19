#include <stdio.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
int main(void)
{
	int n, m, i;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (i = m + 1; i < 10; i++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(i + '0');
				if (n != 7 || m != 8 || i != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');


	return (0);
}
