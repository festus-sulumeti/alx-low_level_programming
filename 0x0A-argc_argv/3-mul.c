#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Multiplies two numbers.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{

	if (argc != 3) /* Check 2 arguments passed */
	{
		printf("Error\n");
		return (1);
	}


	printf("%d\n", atoi(argv[1]) * atoi(argv[2])); /* arguments to integer */

	return (0);
}
