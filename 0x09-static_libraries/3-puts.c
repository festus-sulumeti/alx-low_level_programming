#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to string to print
 */
void _puts(char *str)
{
    int number_in = 0;

    do {
        _putchar(str[number_in]);
        number_in++;
    } while (str[number_in] != '\0');

    _putchar('\n');
}
