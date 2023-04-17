#include <stdio.h>

/**
*main - Entry point
* Description: This program prints name of source file
*              from which it was compiled,
*              along with a message indicating
*              that it has been compiled successfully.
* Return: Always 0 (Success)
*/
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
