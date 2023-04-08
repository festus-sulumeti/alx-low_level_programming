#include "main.h"

/**
 * _strspn - returning length of string
 * @s: string being searched
 * @accept: targeting matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
    int i = 0, j;
    unsigned int matches = 0;

    do {
        for (j = 0; accept[j] != '\0'; j++) /*iterate through target*/
        {
            if (s[i] == accept[j]) /*record & break at first*/
            {
                matches++;
                break;
            }

            if (accept[j + 1] == '\0' && s[i] != accept[j])
                return (matches); /*return if idx doesn't match*/
        }

        i++;
    } while (s[i - 1] != '\0'); /*iterate through string*/

    return (matches); /* return num if all match till end */
}
