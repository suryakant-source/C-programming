/*
Q11) Display the decimal equivalent of an entered binary number.
*/

#include <stdio.h>

int main() {
    long long bin;
    int dec = 0, base = 1, rem;

    printf("Enter binary number: ");
    scanf("%lld", &bin);

    while (bin > 0) {
        rem = bin % 10;
        dec += rem * base;
        bin /= 10;
        base *= 2;
    }

    printf("Decimal = %d\n", dec);
    return 0;
}
