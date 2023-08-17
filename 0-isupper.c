#include "main.h"

/**
 * _isupper - a function that checks for uppercase chareacter
 * @c: parameter to be checked
 * Return: returns 1on success and 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
