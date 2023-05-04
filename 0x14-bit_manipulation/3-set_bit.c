#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: number to check the value of
* @index: index looking for number
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int number = *n;

if (index > sizeof(8) * 8)
{
if (n == NULL)
{
return (-1);
}
else
{
return (-1);
}
}

number |= (1 << index);

*n = number;

return (1);
}
