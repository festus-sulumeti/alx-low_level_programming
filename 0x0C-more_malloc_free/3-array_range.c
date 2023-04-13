#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: min value.
* @max: max value.
*
* Return: pointer to the new create array.
* if man > mix, returns NULL.
*/
int *array_range(int min, int max)
{
int *range;
int i;

if (min > max)
return (NULL);

range = malloc(sizeof(*range) * ((max - min) + 1));

if (range == NULL)
return (NULL);

i = 0;
do {
range[i] = min++;
} while (min <= max && ++i);

return (range);
}
