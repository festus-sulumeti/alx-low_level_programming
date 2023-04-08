#include "main.h"

/**
 * _strcmp - comparing strings
 * @s1:  to first string
 * @s2:  to second string
 *
 * Return: Value less than 0 if string is less than the other
 *         Value greater than 0 if string is greater then the other
 *         0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
    int number_1 = 0;
    int lane;

    do {
        lane = s1[number_1] - s2[number_1];
        if (lane != 0 || s1[number_1] == '\0') {
            break;
        }
        number_1++;
    } while (1);

    return (lane);
}
