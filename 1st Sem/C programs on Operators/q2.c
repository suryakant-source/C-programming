/*
Q2) Convert any input temperature in Fahrenheit to Celsius.
Formula: C = (F - 32) * 5 / 9
*/

#include <stdio.h>

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius = %.2f\n", c);
    return 0;
}
