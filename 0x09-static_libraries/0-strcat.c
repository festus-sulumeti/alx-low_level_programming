#include "main.h"
/**
  * _strcat - Function that concatenates two strings.
  * @dest: Pointer to destination string
  * Return: pointer to destination string.
*/
char *_strcat(char *dest, char *src)
{
	int length_in, k;

	length_in = 0;
	while (dest[length_in] != '\0')
	{
		length_in++;
	}
	for (k = 0; src[k] != '\0'; k++, length_in++)
	{
		dest[length_in] = src[k];
	}
	dest[length_in] = '\0';
	return (dest);
}
