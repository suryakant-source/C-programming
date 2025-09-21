/*
Q15) Find the sum of the individual digits of any inputted three-digit positive number.
*/

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    sum += num % 10;   // last digit
    num /= 10;
    sum += num % 10;   // middle digit
    num /= 10;
    sum += num;        // first digit
    printf("Sum of digits = %d\n", sum);
    return 0;
}
