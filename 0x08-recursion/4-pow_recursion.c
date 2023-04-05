
#include "main.h"
/**
 * _pow_recursion - returning the value of x to the power of y.
 * @y:int, for power.
 * @x: for number.
 * Return:int, x number to the pow of y number .
 * have this on the code -1 if x < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
