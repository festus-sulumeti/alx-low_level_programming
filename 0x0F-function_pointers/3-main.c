#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* get_op_func - ...
* @s: ...
*
* Return: ...
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}

/**
* main - ...
* @argc: ...
* @argv: ...
*
* Return: ...
*/
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
