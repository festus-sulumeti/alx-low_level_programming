#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers.
 * @argc: argument's count
 * @argv: arguments here stated
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int p, number_1, result, l;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);
	number_1 = atoi(argv[2]);
	result = 0;
	l = 0;

	do {
		result += p;
		l++;
	} while (l < number_1);

	printf("%d\n", result);

	return (0);
}
