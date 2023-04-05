#include "main.h"

/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: the string to measure the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(const char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome recursively
 * @s: the string to check
 * @left: the left index of the string
 * @right: the right index of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(const char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
		return (0);

	return (is_palindrome(s, left + 1, right - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(const char *s)
{
	int length = _strlen_recursion(s);

	return (is_palindrome(s, 0, length - 1));
}
