/**
 * _sqrt_recursive - Helper function to find the square root of a number using recursion.
 * @i: Guess for the square root.
 * @n: Number for which square root is being calculated.
 *
 * Return: The square root of n if found, otherwise -1.
 */
int _sqrt_recursive(int i, int n)
{
    if (i * i == n)
        return i;
    if (i > n / 2)
        return -1;
    return _sqrt_recursive(i + 1, n);
}

/**
 * _sqrt_recursion - Calculates the square root of a number.
 * @n: Number for which square root is being calculated.
 *
 * Return: The square root of n if it's a perfect square, otherwise -1.
 */
int _sqrt_recursion(int n)
{
    if (n == 0 || n == 1)
        return n;
    return _sqrt_recursive(0, n);
}
