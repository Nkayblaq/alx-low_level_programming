/**
 * is_prime - Helper function to check if a number is prime using recursion.
 * @n: Number to be checked.
 * @divisor: Current divisor being checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime(int n, int divisor)
{
	if (divisor <= 1)
		return (1);

	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: Number to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n / 2));
}

