/*
Q1) Print first n natural numbers using while loop.
*/

#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}
