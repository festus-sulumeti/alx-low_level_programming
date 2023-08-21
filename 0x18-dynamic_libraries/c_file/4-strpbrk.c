#include "main.h"
#define NULL 0

/**
 * * _strpbrk - Searches a string for any set of byte
 * * @s: string to search, also first occurence in the string
 * * @accept: target matches
 * * Return: pointer to index of string at first occurence and to the byte
 */

char *_strpbrk(char *s, char *accept)
{
		int a = 0, c;

			while (s[a] != '\0')
			{
				for (c = 0; accept[c] != '\0'; c++)
				{
					if (s[a] == accept[c])
					{
						s = &s[a];
						return (s);
					}

				}

				a++;
			}

			return (NULL);

}
