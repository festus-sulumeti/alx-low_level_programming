#include "main.h"
#define NULL 0

/**
  * _strchr - locate 1st occurrence of char in string and returns pointer there
  * @s: string to search/in the string
  * @c: target and also the occurrence of characer
  * Return: pointer to that character in string
  */

char *_strchr(char *s, char c)
{
	int number = 0;

	while (s[number] != '\0' && s[number] != c)
		number++;

	if (s[number] == c)
		return (&s[number]);

	else
		return (NULL);
}
