#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Retun: On success, a pointer to the newly allocated memory.
 *         On failure, the program exits with a status code of 98.
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);

	if (output == NULL)
		exit(98);
	else
		return (output);
}
