#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @n: number of bytes
 * @s: area to fill with bytes
 * @b: constant byte
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
