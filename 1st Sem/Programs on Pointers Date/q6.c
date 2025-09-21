/*
Q6) Design a user defined function SCount() that will count the number
of characters present in a string using pointer
*/

#include <stdio.h>

int SCount(char *str) {
    int count = 0;
    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of string: %d\n", SCount(str));
    return 0;
}
