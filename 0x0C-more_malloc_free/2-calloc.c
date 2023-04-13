#include "main.h"

/**
* _calloc - allocate mem nmemb, initialized to 0
* @nmemb: number of elements
* @size: size of each element in bytes
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *mem_ptr;
unsigned int total_size = 0, i = 0;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
mem_ptr = malloc(total_size);

if (mem_ptr == NULL)
return (NULL);

do {
mem_ptr[i] = 0;
i++;
} while (i < total_size);

return (mem_ptr);
}
