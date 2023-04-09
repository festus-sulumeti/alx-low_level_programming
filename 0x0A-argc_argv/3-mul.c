#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the multiplication of two integers
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if it works, 1 error
*/

int main(int argc, char **argv)
{
int newly, z, product;
int i = 0;

while (i < argc)
{
if (i == 1)
{
newly = atoi(argv[i]);
}
else if (i == 2)
{
z = atoi(argv[i]);
}
i++;
}
product = newly *z;
printf("%d\n", product);
return (0);
}
