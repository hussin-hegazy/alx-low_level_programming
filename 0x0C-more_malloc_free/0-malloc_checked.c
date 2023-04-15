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
unsigned int *mg;
mg = malloc(b);
if (mg == NULL)
exit(98);
return (mg);
}
