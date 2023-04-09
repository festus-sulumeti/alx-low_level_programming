#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int num, digi, nip, lenside, f, digitnum;

	num = 0;
	digi = 0;
	nip = 0;
	lenside = 0;
	f = 0;
	digitnum = 0;

	while (s[lenside] != '\0')
		lenside++;

	while (num < lenside && f == 0)
	{
		if (s[num] == '-')
			++digi;

		if (s[num] >= '0' && s[num] <= '9')
		{
			digitnum = s[num] - '0';
			if (digi % 2)
				digitnum = -digitnum;
			nip = nip * 10 + digitnum;
			f = 1;
			if (s[num + 1] < '0' || s[num + 1] > '9')
				break;
			f = 0;
		}
		num++;
	}

	if (f == 0)
		return (0);

	return (nip);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum_in, number, nil, f, k;

	sum_in = 0;

	for (nil = 1; nil < argc; nil++)
	{
		for (f = 0; argv[nil][f] != '\0'; j++)
		{
			if (argv[nil][f] > '9' || argv[nil][f] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		number = _atoi(argv[k]);
		if (num >= 0)
		{
			sum_in += number;
		}
	}

	printf("%d\n", sum_in);
	return (0);
}
