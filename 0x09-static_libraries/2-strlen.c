#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	do {
		len++;
	} while (*(s + len) != '\0');

	return (len);
}
