/*
Q10) Find average of three numbers entered by the user.
*/

#include <stdio.h>

int main() {
    float a, b, c, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average = %.2f\n", avg);
    return 0;
}
