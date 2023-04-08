#include <stdio.h>
#include "main.h"
/**
 * main - program Entry point
 * @argc: Count of arg passed to the program
 * @argv: Array of pointers to strings containing args
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
(void) argv; /* Ignore argv */
printf("%i\n", argc - 1);  /* Print the count of arguments */
return (0);
}
