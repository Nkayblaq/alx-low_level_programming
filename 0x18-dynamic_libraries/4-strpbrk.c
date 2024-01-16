#include "main.h"

/**
 * _strpbrk -  a function thgat searches a string for any set of bytes
 * @s: string to search from
 * @accept: string to be searched
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
