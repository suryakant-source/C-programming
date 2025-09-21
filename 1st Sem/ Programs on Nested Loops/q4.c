/*
Q4) Print the following pattern:

1  
0 0  
1 1 1  
0 0 0 0  
1 1 1 1 1
*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        int val = (i % 2 == 1) ? 1 : 0;
        for (j = 1; j <= i; j++) {
            printf("%d ", val);
        }
        printf("\n");
    }
    return 0;
}
