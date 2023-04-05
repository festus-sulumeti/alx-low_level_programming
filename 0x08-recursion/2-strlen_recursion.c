#include "main.h"
/**
* _strlen_recursion - Getting the length of a string
* @s: measuring of the string
*Return: finding the string length
*/

int _strlen_recursion(char *s)
{
	int lengthInView = 0;

	if (*s != '\0')
	{
		lengthInView++; /* Lenght increment */
		lengthInView += _strlen_recursion(s + 1);
	}
	return (lengthInView); /* Returning the string length */
}
