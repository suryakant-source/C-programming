/*
Q4) Create a user defined function to return the maximum among 2 integers
using pointer concept (pointer arguments and pointer return type)
*/

#include <stdio.h>

int* max(int *a, int *b) {
    if(*a > *b) return a;
    else return b;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int *maxPtr = max(&x, &y);
    printf("Maximum value: %d\n", *maxPtr);

    return 0;
}
