#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointing to a string of 0 and 1 chars
 *
 * Return: Converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	int i, multiplier;
	unsigned int number;

	if (!b)
		return (0);

	for (i = number = 0; b[i] != 0; i++)
		if (b[i] != 48 && b[i] != 49)
			return (number);

	for (i -= 1, multiplier = 0; i >= 0; i--, multiplier++)
	{
		if (b[i] == 48)
			continue;

		number += 1 << multiplier;
	}

	return (number);
}
