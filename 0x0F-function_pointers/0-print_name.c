#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: name printed.
 * @f: A pointer to function printing a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		if (name == NULL)
		{
			printf("Error: Name is NULL.\n");
		}
		else
		{
			printf("Error: Function pointer is NULL.\n");
		}
		return;
	}

	f(name);
}
