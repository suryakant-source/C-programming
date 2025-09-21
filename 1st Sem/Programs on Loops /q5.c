/*
Q5) Find the sum of all user entered numbers until the sum exceeds 100 using do-while loop.
*/

#include <stdio.h>

int main() {
    int num, sum = 0;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    } while (sum <= 100);

    printf("Final sum = %d\n", sum);
    return 0;
}
