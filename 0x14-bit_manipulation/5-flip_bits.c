#include "main.h"

/**
* flip_bits - number flip gotten from one number to another
* @n: number
* @m: number
* Return: return count of flipped number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int number;

number = n ^ m;
while (number > 0)
{
if ((number & 1) == 1)
{
count++;
}
if ((number & 1) == 0)
{
break;
}
number >>= 1;
}
return (count);
}
