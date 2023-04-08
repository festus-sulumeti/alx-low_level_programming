#include <stdio.h>

/**
 * main - prints all arguments it sees
 * @argc: argument counting
 * @argv: arguments here
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int new_1 = 0;

	do {
		printf("%s\n", argv[new_1]);
		new_1++;
	} while (new_1 < argc);

	return (0);
}
