#include "holberton.h"

/**
 * multiplication - returns the conjugate of a number
 * @c1: complex number n1
 * @c2: complex number n2
 * @c3: pointer to the resultant complex number
 */

void multiplication(complex c1, complex c2, complex *c3)
{
    c3->re = c1.re * c2.re - c1.im * c2.im;
    c3->im = c1.re * c2.im + c1.im * c2.re;
}
