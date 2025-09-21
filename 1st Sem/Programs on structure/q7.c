/*
Q7) Define a structure COMPLEX having members as real, and imag.
Define a user-defined function ADDCOMPLEX() which will receive two structure variables 
as its arguments and will return a structure variable. The function adds two complex numbers.
*/

#include <stdio.h>

struct COMPLEX {
    float real;
    float imag;
};

struct COMPLEX ADDCOMPLEX(struct COMPLEX a, struct COMPLEX b) {
    struct COMPLEX sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}

int main() {
    struct COMPLEX c1, c2, result;

    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = ADDCOMPLEX(c1, c2);

    printf("Sum of complex numbers: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
