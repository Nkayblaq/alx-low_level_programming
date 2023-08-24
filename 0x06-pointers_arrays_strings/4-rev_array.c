#include "main.h"

/**
 * reverse_array - a functyion that reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements of the array to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
