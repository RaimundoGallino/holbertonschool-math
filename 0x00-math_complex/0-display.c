#include "holberton.h"

/**
 * display_complex_number - display a complex number
 * @c: complex number
 */

void display_complex_number(complex c)
{
    if (c.im == 0)
        printf("%i\n", c.re);
    else if (c.im == -1)
        printf("%i - i\n", c.re);
    else if (c.im == 1)
        printf("%i + i\n", c.re);
    else if (c.im < 0)
    {
        c.im = -c.im;
        printf("%i - %ii\n", c.re, c.im);
    }
    else
        printf("%i + %ii\n", c.re, c.im);
}
