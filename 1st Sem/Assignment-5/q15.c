/*
Q15) Print all natural numbers in descending order up to 1 from an entered number
except the numbers divisible by 7 (use continue statement).
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        if (i % 7 == 0)
            continue;
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
