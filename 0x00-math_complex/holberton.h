#include <stdio.h>
#include <math.h>

/**
 * struct complex - struct of a complex number
 * @re: real number
 * @im: imaginary number
 */

struct complex {
    int re;
    int im;
} typedef complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);

