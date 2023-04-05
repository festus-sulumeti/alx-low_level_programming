#include "main.h"
/**
* _print_rev_recursion - Printing string in a reversing manner.
*
*@s: parameter string
*Return: void
*
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1); /*adding of the s*/
		_putchar(*s); /*displaying the s output*/
	}
}
