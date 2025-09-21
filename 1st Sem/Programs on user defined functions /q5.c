/*
Q5) Design a function to check whether a number is palindrome or not
*/

#include <stdio.h>

int isPalindrome(int n) {
    int original = n, rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return (original == rev);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
