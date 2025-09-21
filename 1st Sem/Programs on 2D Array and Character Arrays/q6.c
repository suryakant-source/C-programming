/*
Q6) Check a matrix is sparse or not
*/

#include <stdio.h>

int main() {
    int r, c, zeroCount = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            if(mat[i][j] == 0) zeroCount++;

    if(zeroCount > (r*c)/2)
        printf("The matrix is sparse.\n");
    else
        printf("The matrix is not sparse.\n");

    return 0;
}
