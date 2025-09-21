/*
Q4) Check whether an entered number is positive, negative or zero using nested if-else.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0)
            printf("Number is Zero\n");
        else
            printf("Number is Positive\n");
    } else {
        printf("Number is Negative\n");
    }

    return 0;
}
