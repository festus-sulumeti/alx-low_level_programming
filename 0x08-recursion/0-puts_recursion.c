#include "main.h"
/**
  *_puts_recursion - prints a string, on the terminal
  *
  *@s: pointer block of memory to fill, by taking us to the memomry
  *
  *Return: void, meaning for an empty value
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')

	{
		_putchar('\n');
		return;
	}

		_putchar (*s);
		_puts_recursion(s + 1);
}
