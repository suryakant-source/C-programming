/*
Q7) Find the GCD of two entered numbers.
*/

#include <stdio.h>

int main() {
    int a, b, gcd, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d\n", gcd);
    return 0;
}
