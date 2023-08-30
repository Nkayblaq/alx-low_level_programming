#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number
 * @n: the number to look for its factorial
 * Return: the factorial of n
 */

int factorial(int n)
{
	int i;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	i = factorial(n - 1);
	return (n * i);
}
