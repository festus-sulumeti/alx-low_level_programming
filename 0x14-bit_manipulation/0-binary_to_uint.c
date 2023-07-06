#include "main.h"

/**
 * binary_to_uint  - converting a binary number to an unsigned int
 * @b:  pointis to a string of 0 and 1 chars
 * Return: the converted number or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	do {
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	} while (b[i] != '\0');

	i = 0;
	do {
		number *= 2;
		if (b[i] == '1')
			number += 1;

		i++;
	} while (b[i] != '\0');

	return (number);
}
