#include "main.h"

/**
 * flip_bits - the number flip to get from one number to another
 * @n: number
 * @m: number
 * Return: return count of flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int num;

	num = n ^ m;
	while (num > 0)
	{
		if ((num & 1) == 1)
			counter++;
		num >>= 1;
	}
	return (counter);

}
