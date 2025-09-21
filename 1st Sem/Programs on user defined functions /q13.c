/*
Q13) Design a user defined function XSTRLEN() to find the length of any string
*/

#include <stdio.h>

int XSTRLEN(char str[]) {
    int length = 0;
    while(str[length] != '\0') length++;
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of string: %d\n", XSTRLEN(str));
    return 0;
}
