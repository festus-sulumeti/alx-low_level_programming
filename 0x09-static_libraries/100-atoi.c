#include <stdio.h>
#include "main.h"

/**
 * _atoi - function converts string to an integer
 * @s: Pointer parameter
 * Return: returns an integer value
 */
int _atoi(char *s)
{
	unsigned int counting = 0, sizing = 0, j = 0, k = 1, m = 1, i;

	do {
		if (sizing  > 0 && (*(s + counting) < '0' || *(s + counting) > '9'))
			break;

		if (*(s + counting) == '-')
			k *= -1;

		if ((*(s + counting) >= '0') && (*(s + counting) <= '9'))
		{
			if (sizing  > 0)
				m *= 10;
			sizing ++;
		}
		counting++;
	} while (*(s + counting) != '\0');

	for (i = counting - sizing ; i < counting; i++)
	{
		j = j + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (j * k);
}
