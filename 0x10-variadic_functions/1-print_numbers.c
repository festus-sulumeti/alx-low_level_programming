#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by a new line
* @separator: the string to be printed between numbers
* @n: number of parameters to be printed
*
* Description: This function takes a variable number
*               of integer arguments,
*              and prints them separated
*               by the string `separator`.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{

printf("%d", va_arg(args, int));


if (separator && i < n - 1) /* if there are more arguments*/
{
printf("%s", separator);
}
}

/* print a newline character at the end */
printf("\n");

va_end(args);
}
