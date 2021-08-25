#include "holberton.h"

/**
 * conjugate - returns the conjugate of a number
 * @c: complex number
 */

complex conjugate(complex c)
{
    c.im = -c.im;
    return(c);
}
