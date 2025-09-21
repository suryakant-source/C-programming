/*
Q13) Check whether an entered number is a palindrome number or not.
*/

#include <stdio.h>

int main() {
    int num, rev = 0, orig, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    orig = num;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (orig == rev)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
