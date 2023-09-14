#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter on elements of array
 * @size: size of the array
 * @action: function to perform on each element of the array
 * @array: the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
