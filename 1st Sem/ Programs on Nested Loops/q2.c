/*
Q2) Print the following pattern:

A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F
*/

#include <stdio.h>

int main() {
    int i, j;
    char ch;
    for (i = 1; i <= 6; i++) {
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
