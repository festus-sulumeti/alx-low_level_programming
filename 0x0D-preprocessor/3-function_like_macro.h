#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
* File: function_like_macro.h
* Description: This header file defines a function-like macro ABS(x)
*              that computes the absolute value of a number x.
* The ABS macro takes a single argument x and returns its
*        absolute value. If x is less than zero, the macro returns
*        the negation of x, otherwise it returns x.
* Example: int num = -10;
*           int abs_num = ABS(num);  abs_num is now 10
*/

#define ABS(x) ((x) < 0 ? (-x) : (x))

#endif
