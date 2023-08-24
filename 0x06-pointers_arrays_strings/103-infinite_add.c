/* add_strings.c */

#include "main.h"

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *add_strings(char *n1, char *n2, char *r, int r_index);

/**
 * infinite_add - Adds two numbers stored as strings to a buffer.
 * Assumes positive numbers and that only digits are in the strings.
 * If result fits in the buffer, returns pointer to result.
 * If result does not fit, returns `0`.
 *
 * @n1: First number to be added.
 * @n2: Second number to be added.
 * @r: Buffer to store result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to result, or `0` if buffer is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int r_index = size_r - 2;
    char *result;

    while (*n1)
    {
        if (r_index < 0)
            return (0);

        n1++;
        r_index--;
    }

    while (*n2)
    {
        if (r_index < 0)
            return (0);

        n2++;
        r_index--;
    }

    if (r_index < 0)
        return (0);

    result = add_strings(n1 - 1, n2 - 1, r, r_index);

    if (!result)
        return (0);

    return (result);
}
