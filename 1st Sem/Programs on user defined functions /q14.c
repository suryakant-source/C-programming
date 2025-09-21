/*
Q14) Design a user defined function XSTRCAT to concatenate one string at the end of another string
*/

#include <stdio.h>

void XSTRCAT(char str1[], char str2[]) {
    int i = 0, j = 0;
    while(str1[i] != '\0') i++; // move to end of str1
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++; j++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[200], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    XSTRCAT(str1, str2);

    printf("Concatenated string: %s\n", str1);
    return 0;
}
