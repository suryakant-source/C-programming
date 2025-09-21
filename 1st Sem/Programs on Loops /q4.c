/*
Q4) Find Fibonacci series up to an entered number using do-while loop.
Test data: Entered number = 90
Output series: 0 1 1 2 3 5 8 13 21 34 55 89
*/

#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;
    printf("Enter limit: ");
    scanf("%d", &limit);

    printf("%d %d ", a, b);

    do {
        next = a + b;
        if (next > limit) break;
        printf("%d ", next);
        a = b;
        b = next;
    } while (1);

    printf("\n");
    return 0;
}
