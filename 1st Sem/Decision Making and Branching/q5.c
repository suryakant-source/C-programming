/*
Q5) Check whether two entered numbers are equal or 
the first number is greater than the second number or 
the second number is greater than the first number using nested if-else.
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Both numbers are Equal\n");
    else {
        if (a > b)
            printf("First number is Greater\n");
        else
            printf("Second number is Greater\n");
    }

    return 0;
}
