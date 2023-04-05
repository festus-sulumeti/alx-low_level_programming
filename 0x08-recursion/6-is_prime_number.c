#include "main.h"

/**
 * actual_prime - checks if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - checks if an integer is prime
 * @n: number to evaluate
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n / 2));
}
