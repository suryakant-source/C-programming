/*
Q14) Check whether an entered number is an Armstrong number or not.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, orig, digit, sum = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    orig = num;

    // count digits
    int temp = num;
    while (temp > 0) {
        n++;
        temp /= 10;
    }

    // calculate Armstrong sum
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    if (sum == orig)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
