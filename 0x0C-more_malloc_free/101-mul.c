#include "main.h"

/**
* _puts - prints a string, followed by a new line,
* @str: pointer to the string to print
* Return: void
*/
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

/**
* _atoi - convert a string to an integer.
* @s: char type string
* Return: integer converted
*/
int _atoi(const char *s)
{
int sign = 1;
unsigned long int result = 0;
int i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}

for (; s[i] != '\0'; i++)
{
if (s[i] < '0' || s[i] > '9')
{
break;
}

result = result * 10 + (s[i] - '0');
}

return (sign *result);
}

/**
* print_int - prints an integer.
* @n: int
* Return: void
*/
void print_int(unsigned long int n)
{
unsigned long int divisor = 1, resp;

do {
divisor *= 10;
} while (n / divisor > 9);

do {
divisor /= 10;
resp = n / divisor;
_putchar('0' + resp);
n %= divisor;
} while (divisor > 1);
}

/**
* main - print the result of the multiplication, followed by a new line
* @argc: int
* @argv: list
* Return: 0 if successful, 1 if error occurred
*/
int main(int argc, char const *argv[])
{
int num1, num2;

if (argc != 3)
{
_puts("Error: Expected 2 arguments");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);

print_int(num1 *num2);
_putchar('\n');

return (0);
}
