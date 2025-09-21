/*
Q14) Print whether an input number is even or odd using conditional operator.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("Even\n") : printf("Odd\n");
    return 0;
}
