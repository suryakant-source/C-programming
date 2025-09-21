/*
Q9) Find sum of all even numbers in a given range.
*/

#include <stdio.h>

int main() {
    int start, end, sum = 0;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0)
            sum += i;
    }

    printf("Sum of even numbers = %d\n", sum);
    return 0;
}
