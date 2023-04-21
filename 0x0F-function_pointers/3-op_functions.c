#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: sum of a and b
  */
int op_add(const int a, const int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: difference of a and b
  */
int op_sub(const int a, const int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: product of a and b
  */
int op_mul(const int a, const int b)
{
	return (a * b);
}

/**
  * op_div - divides two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: quotient of a divided by b
  */
int op_div(const int a, const int b)
{
	if (b == 0)
	{
		printf("Error: Cannot divide by zero\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - calculates the remainder of dividing two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: remainder of a divided by b
  */
int op_mod(const int a, const int b)
{
	if (b == 0)
	{
		printf("Error: Cannot divide by zero\n");
		exit(100);
	}

	return (a % b);
}
