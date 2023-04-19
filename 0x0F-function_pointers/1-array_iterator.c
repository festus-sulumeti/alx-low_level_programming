

#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute function given as  parameter on each element
 *                  of  array.
 * @array: array here.
 * @size:  array size.
 * @action: A pointer to function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	do {
		action(array[i]);
		i++;
	} while (i < size);
}
