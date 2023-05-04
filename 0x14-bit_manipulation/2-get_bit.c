#include "holberton.h"

/**
 * get_bit - print value of a bit at a given index
 * @n: Number to check the value
 * @index: index to look for number
 * Return: value at given index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > (sizeof(8) * 8))
		return (-1);

	/*iterating number to the right index*/
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return ((n & 1));
}
