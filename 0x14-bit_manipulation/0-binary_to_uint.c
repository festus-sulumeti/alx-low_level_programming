#include "holberton.h"

/**
* binary_to_uint  - converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: converted number or 0 if b is NULL or contains invalid characters
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;


if (b == NULL)
return (0);


do {
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
} while (b[i] != '\0');


for (i = 0; b[i] != '\0'; i++)
{
num *= 2;
if (b[i] == '1')
num += 1;
}

return (num);
}
