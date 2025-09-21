/*
Q1) Find the largest between two entered numbers.
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Largest = %d\n", a);
    else if (b > a)
        printf("Largest = %d\n", b);
    else
        printf("Both numbers are equal.\n");

    return 0;
}
