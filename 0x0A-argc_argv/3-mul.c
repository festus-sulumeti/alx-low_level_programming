#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers.
 * @argc: argument count
 * @argv: arguments here
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int p, z, result, newly_1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);
	z = atoi(argv[2]);
	result = 0;

	for (newly_1 = 0; newly_1 < z; newly_1++)
	{
		result += p;
	}

	printf("%d\n", result);

	return (0);
}
