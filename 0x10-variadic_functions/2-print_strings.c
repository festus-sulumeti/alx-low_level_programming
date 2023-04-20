#include "variadic_functions.h"

/**
* print_strings - Prints strings passed to function
* @separator: A string used to separate strings
* @n: number of unnamed parameters
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
char *str;

va_start(args, n);

do {
str = va_arg(args, char *);


if (str != NULL)

printf("%s", str);

else

printf("(nil)");


if (separator != NULL && i < n - 1)

printf("%s", separator);


i++;
} while (i < n);

printf("\n");

va_end(args);
}
