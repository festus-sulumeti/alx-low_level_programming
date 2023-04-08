#include "main.h"
/**
  * char *_memcpy - copies n bytes from memory area src to memory area dest
  * @dest: destination
  * @src: source
  * @n: number of bytes
  * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int number;

		for (number = 0; number < size; number++)
		dest[number] = src[number];
	}

	return (dest);
}
