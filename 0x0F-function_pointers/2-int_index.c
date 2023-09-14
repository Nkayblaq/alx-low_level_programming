#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer
 * @array: array to search from
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: index of the matched character or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if  (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
