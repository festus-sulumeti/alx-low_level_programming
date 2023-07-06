#include "main.h"

/**
 * binary_to_uint  - converting a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return:   converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int number = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i]  != '0' && b[i] != '1')
			return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		number *= 2;
		if (b[i] == '1')
			number += 1;
	}
	return (number);



}
