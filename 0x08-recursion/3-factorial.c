#include "main.h"

/**
* factorial - look for the factorial of a number
* @n: will be the number to find the factorial of numbers searched
*
* Return: the factorial of the number, at this stage
*/

int factorial(int n)
{
	int number_for_factorial;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	number_for_factorial = factorial(n - 1);
	return (n * number_for_factorial); /* we get the result*/
}
