#include "main.h"
#include <stdlib.h>

/**
* main - positive numbers
* @argc: n arguments
* @argv: args
* Return: int run
*/
int main(int argc, char *argv[])
{
unsigned long multipy;
int num1in, num2in;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (num1in = 1; num1in <  argc; num1in++)
	{
		for (num2in = 0; argv[num1in][num2in] != '\0'; num2in++)
		{
			if (argv[num1in][num2in] > 57 || argv[num1in][num2in] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	multipy = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", multipy);
return (0);
}
