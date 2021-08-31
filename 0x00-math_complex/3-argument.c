#include "holberton.h"

/**
 * argument - returns the conjugate of a number
 * @c: complex number
 */

double argument(complex c)
{
    c.re = (double)c.re;
    c.im = (double)c.im;
    return(atan(c.im/c.re));
}
