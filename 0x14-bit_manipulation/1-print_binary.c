#include "main.h"

/**
* print_binary - print binary rep of a number.
* @n:  number convert binary
* Return: void
*/

void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
}
else
{
print_num_binary(n >> 1);
if ((n & 1) == 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
}

/**
* print_num_binary -  Print binary repr of a number
* @n: Number to convert binary
* Return: void
*/
void print_num_binary(unsigned long int n)
{
if (n == 0)
{
return;
}
print_num_binary((n >> 1));
if ((n & 1) == 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
