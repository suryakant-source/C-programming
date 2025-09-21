/*
Q6) Find the sum of two integers and print the result.
*/

#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;
}
