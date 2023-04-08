#include "main.h"
/**
   *_memset - fills memory with a constant byte.
   *@s: pointer to memory area.
   *@b: constant to fill memory, @n: bytes of the memory
*Return: pointer to memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int newly;

	for (newly = 0; newly < n; newly++)
	{
		s[newly] = b;
	}
	return (s);
}
