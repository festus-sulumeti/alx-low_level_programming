#include "main.h"

/**
* set_bit - seting the value of a bit to 1 at a given index
* @n: number to check the value
* @index: index to look for the number
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int no = *n;

if (index > (sizeof(unsigned long int) * 8))
{
return (-1);
}

if ((no & (1 << index)) == 0)
{
no |= (1 << index);
*n = no;
return (1);
}
else
{
return (0);
}
}
