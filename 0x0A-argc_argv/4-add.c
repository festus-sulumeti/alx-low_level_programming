#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if a string has digits
 * @str: string to check
 *
 * Return: 1 if the string has digits, 0 otherwise
 */

int check_num(char *str)
{
unsigned int carrier = 0;
do {
if (!isdigit(str[carrier]))
return (0);
carrier++;
} while (carrier < strlen(str));
return (1);
}

/**
 * main - adds all the arguments that are numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
int carrier = 1;
int convert_int;
int sum_1 = 0;
do {
if (check_num(argv[carrier]))
{
convert_int = atoi(argv[carrier]); /* ATOI converstion */
sum_1 += convert_int;
}
else
{
printf("Error\n");
return (1);
}
carrier++;
} while (carrier < argc);
printf("%d\n", sum_1);
return (0);
}
