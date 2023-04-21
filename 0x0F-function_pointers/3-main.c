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
    int (*operator_function)(int, int);

    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <num1> <operator> <num2>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    operator_function = get_op_func(argv[2]);

    if (!operator_function)
    {
        fprintf(stderr, "Error\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", operator_function(atoi(argv[1]), atoi(argv[3])));
    return (EXIT_SUCCESS);
}
