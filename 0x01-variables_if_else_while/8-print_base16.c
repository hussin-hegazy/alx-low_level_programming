#include <stdio.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
int main(void)
{
	int n = 0;
	char az;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	for (az = 'a'; az <= 'f'; az++)
		putchar(az);

	putchar('\n');

	return (0);
}
