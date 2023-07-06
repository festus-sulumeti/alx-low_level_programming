#include "main.h"

/**
* clear_bit - seting the value of a bit to 0 at a given index.
* @n: number to check the value
* @index: index looking for the number
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int no = *n;

	if (index > sizeof(8) * 8)
		return (-1);

	no &= ~(1 << index);

	*n = no;

	return (1);
}
