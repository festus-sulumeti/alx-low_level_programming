#include "main.h"
/**
  *_pow_recursion - returning the value of x to the power of y.
  *@x: for number.
  *@y: for power.
  *
  *Return: x number to the pow of y number .
  * have this on the code -1 if x < 0.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0) /*returns -1, indicating an error */
		return (-1);
	if (y == 0) /*returns 1, the result of any number raised to the power of 0. */
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1)); /* returns the result of x raised to the power of y.*/
}
