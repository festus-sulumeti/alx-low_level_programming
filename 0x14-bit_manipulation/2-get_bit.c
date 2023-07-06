#include "main.h"

/**
 * get_bit - printing value of a bit at given index
 * @n: Number checking the value
 * @index: The index to look for the number
 * Return: A value at a given index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > (sizeof(8) * 8))
		return (-1);

	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return ((n & 1));
}
