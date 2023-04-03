#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring and reaturn pointer
 *
 * @haystack: string to search here
 * @needle: the first occurrence of the substring to target
 *
 * Return: a pointer beg of substring, pointer to index or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int e = 0, f = 0;

	while (haystack[e])
	{
		while (needle[f] && (haystack[e] == needle[0]))
		{
			if (haystack[e + f] == needle[f])
				f++;
			else
				break;
		}
		if (needle[f])
		{
			e++;
			f = 0;
		}
		else
			return (haystack + e);
	}
	return (NULL);
}
