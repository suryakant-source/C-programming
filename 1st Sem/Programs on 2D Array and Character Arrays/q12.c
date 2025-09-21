/*
Q12) Check an entered string is palindrome or not
*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0, j = 0;
    while(str[j] != '\0') j++; // find length
    j--; // last index

    int palindrome = 1;
    while(i < j) {
        if(str[i] != str[j]) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
