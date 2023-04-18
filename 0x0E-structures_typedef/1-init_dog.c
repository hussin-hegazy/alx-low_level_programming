#include <stdio.h>
#include "dog.h"
/**
 *init_dog - main funtion.
 *@d: pointer
 *@name: name
 *@owner: owner
 *@age: age
 *Return:d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
