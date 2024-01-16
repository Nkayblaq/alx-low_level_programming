#include "main.h"

/**
 * _isupper - a funtion that checks for uppercase character
 * @c: parameter to be checked
 * Return: returns 1 on success and 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

