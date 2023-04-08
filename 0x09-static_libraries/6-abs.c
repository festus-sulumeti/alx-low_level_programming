#include "main.h"
#include <stdio.h>

/**

*_abs - computing the absolute value of an integer, *@n: the int to be operated upon
*Return: returns an unsigned int value
*/
int _abs(int n)
{
if (n < 0)
{
n = -n;
}

return n;
}
