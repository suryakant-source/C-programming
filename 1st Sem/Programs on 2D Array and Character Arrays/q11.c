/*
Q11) Compare two strings are equal or unequal
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int i = 0, equal = 1;
    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    if(equal)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
