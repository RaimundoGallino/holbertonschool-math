#include "holberton.h"

/**
 * modulus - returns the conjugate of a number
 * @c: complex number
 */

double modulus(complex c)
{
    c.re = (double)c.re;
    c.im = (double)c.im;

    return(sqrt(c.re * c.re + c.im * c.im));
}
