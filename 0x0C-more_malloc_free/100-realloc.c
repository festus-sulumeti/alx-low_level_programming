#include <stdlib.h>
#include "main.h"

void *_memcpy(void *dest, const void *src, unsigned int n);

/**
* _realloc - Reallocates a memory block using malloc and free.
*
* @ptr: A pointer to the memory previously allocated.
* @old_size: The size in bytes of the allocated space for ptr.
* @new_size: The size in bytes for the new memory block.
*
* Return: A pointer to the new memory block, or NULL if allocation fails.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_mem_block;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_mem_block = malloc(new_size);
if (new_mem_block == NULL)
return (NULL);

_memcpy(new_mem_block, ptr, (old_size < new_size) ? old_size : new_size);
free(ptr);
return (new_mem_block);
}

/**
* _memcpy - Copies n bytes from memory area src to memory area dest.
*
* @dest: A pointer to the destination memory area.
* @src: A pointer to the source memory area.
* @n: The number of bytes to copy.
*
* Return: A pointer to dest.
*/
void *_memcpy(void *dest, const void *src, unsigned int n)
{
char *cdest = dest;
const char *csrc = src;

while (n--)
*cdest++ = *csrc++;
return (dest);
}
