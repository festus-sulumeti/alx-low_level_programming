
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
	if (array == NULL || action == NULL)
	{
		return;
	}

	do {
		action(*array);
		array++;
	} while (--size > 0 && *array >= 0);
}
