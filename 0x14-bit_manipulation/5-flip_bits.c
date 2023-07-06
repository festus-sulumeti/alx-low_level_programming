#include "main.h"

/**
* flip_bits - number flip gotten from one number to another
* @n: number
* @m: number
* Return: return count of flipped number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counting = 0;
	unsigned long int no;

	no = n ^ m;
	while (no > 0)
	{
		if ((no & 1) == 1)
			counting++;
		no >>= 1; /*is the same n = n >>1*/
	}
	return (counting);

}
