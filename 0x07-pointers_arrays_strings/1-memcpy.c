#include "main.h"
/**
 * * char *_memcpy - copies @n bytes from memory area src to memory area @dest
 * * @dest: destination
 * * @src: source bytes from memory area
 * * @n: number of bytes
 * * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

		int size_1 = n;

		if (size_1 > 0)
		{
			int counter;

			for (counter = 0; counter < size_1; counter++)
				dest[counter] = src[counter];
		}

		return (dest);
}
