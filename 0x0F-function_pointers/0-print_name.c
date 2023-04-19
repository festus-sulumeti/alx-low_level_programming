#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a specified function.
 *
 * @name: The name to print.
 * @f:    A pointer to the function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		if (name == NULL)
		{
			fprintf(stderr, "Error: Name is NULL.\n");
		}
		else
		{
			fprintf(stderr, "Error: Function pointer is NULL.\n");
		}
		return;
	}

	f(name);
}
