#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - checks if s is an integer
 * @s: string to be checked
 * Return: 0 or 1
 */

int isInteger(const char *s)
{
int num;
num = 0;
while (s[num] != '\0')
{
	if (s[num] < '0' || s[num] > '9')
		return (1);
	num++;
}
return (0);
}

/**
 * main - adds positive numbers
 * @argc: int seen
 * @argv: list here
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int addition;

addition = 0;
while (--argc)
{
	if (isInteger(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	addition += atoi(argv[argc]);
}

printf("%i\n", addition);

return (0);
}
