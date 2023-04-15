#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - main function.
 *@b:number of items
 *
 *Return successful.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
