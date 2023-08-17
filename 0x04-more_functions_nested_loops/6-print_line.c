#include "main.h"

/**
 * print_line - draws straight line in the reminal
 * @n: number of times the line character '_' will be printed
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
