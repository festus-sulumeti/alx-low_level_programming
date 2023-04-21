#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - ...
* @argc: ...
* @argv: ...
*
* Return: ...
*/
int main(int argc, char *argv[])
{
int result;
int i = 1;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

while (i < argc)
{
if (i == 2 && get_op_func(argv[i]) == NULL)
{
printf("Error\n");
exit(99);
}
i++;
}

result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
return (0);
}
