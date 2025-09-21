/*
Q10) Print all numbers in a range that are divisible by 5 and 7.
*/

#include <stdio.h>

int main() {
    int start, end, i;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
