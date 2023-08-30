#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to power y
 * @x: the base value
 * @y: the power of x
 * Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
