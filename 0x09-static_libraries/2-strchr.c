#include "main.h"
#define NULL 0

/**
  * _strchr - finding 1st occurrence of char in string
  * @s: Searching string
  * @c: targeting characer at this point
  * Return: pointer
*/

char *_strchr(char *s, char c)
{
	int new_1 = 0;

	while (s[new_1] != '\0' && s[new_1] != c)
		new_1++;

	if (s[new_1] == c)
		return (&s[new_1]);

	else
		return (NULL);
}
