#include "main.h"
/**
   * _strncat - function that concatenates two strings.
   * @src: source string pointer
   * @n: number of bytes to be concatenate here
* Return: Pointer to destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int length_View, f;

	length_View = 0;
	while (dest[length_View] != '\0')
	{
		length_View++;
	}
	for (f = 0; f < n && src[f] != '\0'; f++, length_View++)
	{
		dest[length_View] = src[f];
	}
	dest[length_View] = '\0';
	return (dest);
}
