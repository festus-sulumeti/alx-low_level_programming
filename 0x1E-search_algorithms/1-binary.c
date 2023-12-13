#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array
*                 of integers using binary search.
* @array: A pointer to the first element of the array to search.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: If the value is not present or the array is NULL, -1.
*         Otherwise, the index where the value is located.
*
* Description: Prints the [sub]array being searched after each change.
*/
int binary_search(int *array, size_t size, int value)
{
size_t left, right, mid;

if (array == NULL)
return (-1);

left = 0;
right = size - 1;

do {
printf("Searching in array: ");
for (mid = left; mid < right; mid++)
printf("%d, ", array[mid]);
printf("%d\n", array[mid]);

mid = left + (right - left) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] > value)
right = mid - 1;
else
left = mid + 1;

} while (right >= left);

return (-1);
}
