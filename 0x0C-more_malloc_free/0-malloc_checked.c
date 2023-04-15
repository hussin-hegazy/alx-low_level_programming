#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - main function.
 *@b:number of items
 *
 *Return successful.
 */
void *malloc_checked(unsigned int b)
{
void *mg;
mg = malloc(b);
if (mg == NULL)
	exit(98);
return (mg);
}
