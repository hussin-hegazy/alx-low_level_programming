#include <stdio.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'q' && az != 'e')
			putchar(az);
	}
	putchar('\n');
	return (0);
}

