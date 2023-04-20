#include "variadic_functions.h"

/**
* print_numbers - print numbers followed by new line
* @n: no of parameter
* @separator: separator between 2 numbers
* Return: Always 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ap;

va_start(ap, n);

if (separator == NULL)
separator = "";

do {
printf("%d", va_arg(ap, int));
i++;

if (i < n)
	{
do {
printf("%s", separator);
break;
} while (1);
}
} while (i < n);

printf("\n");

va_end(ap);
}
