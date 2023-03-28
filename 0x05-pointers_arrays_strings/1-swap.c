#include"main.h"
/**
	* swap_int - Function description
	*
	* @a: Parameter description
	* @b: Parameter description
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
