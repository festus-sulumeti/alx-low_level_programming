#include "main.h"
#define NULL 0

/**
  * _strpbrk - returning pointer to byte in s
  * @s: string searched
  * @accept: targeting matches
  * Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
    int loc = 0, inside;

    do {
        for (inside = 0; accept[inside] != '\0'; inside++)
        {
            if (s[loc] == accept[inside])
            {
                s = &s[loc];
                return (s);
            }
        }
        loc++;
    } while (s[loc] != '\0');

    return (NULL);
}
