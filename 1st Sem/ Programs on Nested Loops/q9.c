/*
Q9) Print all Armstrong numbers in a given range.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, num, temp, digit, sum, n;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        num = i;
        temp = num;
        n = 0;
        while (temp > 0) {
            n++;
            temp /= 10;
        }
        temp = num;
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
