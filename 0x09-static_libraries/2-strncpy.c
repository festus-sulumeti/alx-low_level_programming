#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Pointer to a character being changed
 * @src: Pointer to a character being changed
 * @n: value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int number_1;

    for (number_1 = 0; number_1 < n && src[number_1] != '\0'; number_1++)
    {
        dest[number_1] = src[number_1];
    }

    for (; number_1 < n; number_1++)
    {
        dest[number_1] = '\0';
    }

    return (dest);
}
