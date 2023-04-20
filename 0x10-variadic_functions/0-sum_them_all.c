#include "variadic_functions.h"

/**
* sum_them_all - adds all numbers
* @n: number of parameters passed
* Return: sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
int total_sum = 0;
unsigned int i = 0;
va_list ap;

va_start(ap, n);

if (n == 0)
{
va_end(ap);
return (0);
}

do {
total_sum += va_arg(ap, int);
i++;
} while (i < n);

va_end(ap);

return (total_sum);
}
