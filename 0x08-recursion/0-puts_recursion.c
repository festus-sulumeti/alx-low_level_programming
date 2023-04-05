#include "main.h"
/**
 *_puts_ recursion - print a string, on the terminal
 *
 * @s:string, pointer block of memory to fill
 *
 * Return:void
 */
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
{
	_putchar('\n');
}

}
