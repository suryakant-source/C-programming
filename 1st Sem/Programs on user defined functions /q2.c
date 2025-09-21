/*
Q2) Design a function that will return largest among 2 entered numbers.
Use this function to find largest among three numbers
*/

#include <stdio.h>

int max2(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    int largest = max2(max2(x, y), z);
    printf("Largest number: %d\n", largest);
    return 0;
}
