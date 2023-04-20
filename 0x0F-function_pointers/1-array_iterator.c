#include "function_pointers.h "
#include <stdio.h>
/**
 * array_iterator - main function execute a function given an array
 * @array: first value
 * @size: function 1
 * @action: function 2
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t y;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}
