#include "main.h"
#define NULL 0

/**
  * _strstr - locate and return pointer
  * @haystack: string search
  * @needle: target substring
  * Return: pointer to index of string
*/
char *_strstr(char *haystack, char *needle)
{
	int in_line = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	do
	{
		if (haystack[in_line] == needle[0])
		{
			x = in_line;
			j = 0;

			do
			{
				if (haystack[x] != needle[j])
				{
					break;
				}

				x++;
				j++;
			} while (needle[j] != '\0');

			if (needle[j] == '\0')
			{
				return (haystack + in_line);
			}
		}

		in_line++;
	} while (haystack[in_line] != '\0');

	return (NULL);
}
