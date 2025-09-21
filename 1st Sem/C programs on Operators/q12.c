/*
Q12) Find the greatest among two entered numbers using conditional operator.
*/

#include <stdio.h>

int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    printf("Greatest = %d\n", max);
    return 0;
}
