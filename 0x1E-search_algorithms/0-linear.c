#include "search_algos.h"

/**
* linear_search - searches for a value in an array of
* integers using the Linear search algorithm
*
* @array: input array
* @size: size of the array
* @value: value to search in
* Return: index of the value if found, -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
int i = 0;

if (array == NULL)
return (-1);

do {
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (value == array[i])
return (i);

i++;
} while (i < (int)size);

return (-1);
}
