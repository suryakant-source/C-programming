/*
Q3) Print the following pattern:

1  
1 2 3  
1 2 3 4 5  
1 2 3 4 5 6 7
*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        int num = 1;
        for (j = 1; j <= (2*i - 1); j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
