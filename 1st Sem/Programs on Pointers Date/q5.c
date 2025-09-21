/*
Q5) Count the number of characters in a string using pointer
without using string library function
*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char *ptr = str;
    int count = 0;
    while(*ptr != '\0') {
        count++;
        ptr++;
    }

    printf("Number of characters: %d\n", count);
    return 0;
}
