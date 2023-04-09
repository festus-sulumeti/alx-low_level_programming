#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for a given total
 * @argc: arguement counting
 * @argv: array of pointers to argument
 * Return: number of coins
 **/
int main(int argc, char *argv[])
{
	int total, coinsfil;

	if (argc != 2) /*exactly one argument check*/
	{
		printf("Error\n"); /*Print an error message*/
		return (1); /* 1 indicate error occurred*/
	}
	total = atoi(argv[1]);
	coinsfil = 0;
	if (total > 25)
	{
		while (total >= 25)
			total -= 25, coinsfil++;
	}
	if (total > 10 && total < 25)
	{
		while (total >= 10)
			total -= 10, coinsfil++; /*-10 and +1 to no of coins used*/
	}
	if (total > 5 && total < 10)
	{
		while (total >= 5)
			total -= 5, coinsfil++;
	}
	if (total > 2 && total < 5)
	{
		while (total >= 2)
			total -= 2, coinsfil++; /*-2 and +1 to no of coins used*/
	}
	if (total == 1 || total == 2 || total == 5 || total == 10 || total == 25)
	{
		coinsfil++;
	}
	printf("%d\n", coinsfil); /*number of coins used*/
	return (0);
}
