#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for a calculator program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the program arguments
 *
 * Description:
 * This program takes in two integers and an operator
 * Usage: ./calc num1 operator num2
 *
 * Errors:
 * The program will display "Error" followed by a newline
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
