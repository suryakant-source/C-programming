/*
Q6) Check whether an entered character is a vowel or not using switch-case statement.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n"); break;
        default:
            printf("Not a vowel\n");
    }

    return 0;
}
