#include "main.h"
#include <stdlib.h>

/**
* create_array - creating an array of chars,
* initialize with specific char.
*
* @size: size of the array
* @c: initial value to be assigned to each element of the array
*
* Return: a pointer to array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *array;           /* declare a pointer to char 4 array*/
unsigned int newvalue; /* declare a variable 2 hold current index*/

if (size == 0)
return (NULL);    /* return NULL if size = 0 */

array = (char *)malloc(sizeof(char) * size); /*allocate memory 4 array */
if (array == NULL)
return (NULL);    /*return NULL if memory allocation failed*/

newvalue = 0;         /*initialize index variable*/
do {
array[newvalue] = c; /*set value of current element 2 c*/
newvalue++;          /*increment index variable*/
} while (newvalue < size); /*continue until all elements r initialized*/

return (array);
}
