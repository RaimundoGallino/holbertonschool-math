#include "holberton.h"

/**
 * multiplication - returns the conjugate of a number
 * @c1: complex number n1
 * @c2: complex number n2
 * @c3: pointer to the resultant complex number
 */

void division(complex c1, complex c2, complex *c3)
{
    c1.re = (float)c1.re;
    c1.im = (float)c1.im;
    c2.re = (float)c2.re;
    c2.im = (float)c2.im;

    multiplication(c1, conjugate(c2), c3);

    c3->re = c3->re / ((c2.re * c2.re) + (c2.im * c2.im));
    c3->im = c3->im / ((c2.re * c2.re) + (c2.im * c2.im));
}
