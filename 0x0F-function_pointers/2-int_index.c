
#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - search an integer
* @array: array searched
* @size: array size
* @cmp: pointer to the comparing function
*
* Return: index of first element for which
*         cmp function does not return 0,
*          or -1 if no match is found
*         or size is -ve
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int current_index = 0;

if (!array || !cmp || size <= 0)
return (-1);

do {
if (cmp(array[current_index]))
return (current_index);
current_index++;
} while (current_index < size);

return (-1);
}
