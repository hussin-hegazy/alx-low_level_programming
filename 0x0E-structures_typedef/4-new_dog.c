#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function main
 * @name: value 1
 * @age: value 2
 * @owner: value 3
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z;
	dog_t *pop;

	if (name == NULL || owner == NULL)
		return (NULL);
	pop = malloc(sizeof(dog_t));
	if (pop == NULL)
		return (NULL);
	while (name[x])
	{
		x++;
	}
	while (owner[y])
	{
		y++;
	}
	pop->name = malloc(sizeof(char) * (x + 1));
	if (ppop->name == NULL)
	{
		free(pop);
		return (NULL);
	}
	pop->age = age;
	pop->owner = malloc(sizeof(char) * (y + 1));
	if (pop->owner == NULL)
	{
		free(pop->name);
		free(pop);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
	{
		pop->name[z] = name[z];
	}
	for (z = 0; z <= y; z++)
	{
		pop->owner[z] = owner[z];
	}
	return (pop);
}
