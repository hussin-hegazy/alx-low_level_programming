#include <stdio.h>
/**
	* main - Function description
	*
	* Return: always (0) success
	*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
