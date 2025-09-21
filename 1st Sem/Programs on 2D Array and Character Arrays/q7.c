/*
Q7) Count the length of any user entered string without using any library functions
*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); // reads string without spaces

    int length = 0;
    while(str[length] != '\0') length++;

    printf("Length of the string: %d\n", length);
    return 0;
}
