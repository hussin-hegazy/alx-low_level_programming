#include <stdio.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
		putchar(az);
	putchar('\n');

	return (0);
}
