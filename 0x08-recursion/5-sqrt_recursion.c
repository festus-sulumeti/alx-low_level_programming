#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root,
 */
int _sqrt_recursion(int n)
{
	return (n < 0 ? -1 : actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root,
 */
int actual_sqrt_recursion(int n, int i)
{
	return (i * i > n ? -1 : i * i == n ? i : actual_sqrt_recursion(n, i + 1));
}

