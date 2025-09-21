/*
Q3) Check whether an entered character is a vowel or not.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a Vowel\n", ch);
    else
        printf("%c is Not a Vowel\n", ch);

    return 0;
}
