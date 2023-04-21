
#include "3-calc.h"

/**
* get_op_func - function pointer selects correct functs 2 perform
* the operation asked by  user
* @s: operator given by user
*
* Return: pointer to the funct that corresponds to
* operator given as parameter
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;
while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
{
i++;
}

if (ops[i].op == NULL)
{
return (NULL);
}
else
{
return (ops[i].f);
}
}
