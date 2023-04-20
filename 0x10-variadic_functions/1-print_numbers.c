#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by a new line
* @n: number of parameter
* @separator: separator between two numbers
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
printf("%s", separator);
}
} while (i < n);

printf("\n");

va_end(ap);
}
