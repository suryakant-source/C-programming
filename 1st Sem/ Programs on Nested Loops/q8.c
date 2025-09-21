/*
Q8) Print all palindrome numbers in a given range.
*/

#include <stdio.h>

int main() {
    int start, end, i, num, rev, digit;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        num = i;
        rev = 0;
        while (num > 0) {
            digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        if (rev == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
