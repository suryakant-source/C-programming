/*
Q12) Find the addition results of two matrices using function
*/

#include <stdio.h>

void addMatrices(int r, int c, int mat1[r][c], int mat2[r][c], int sum[r][c]) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];
}

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat1[r][c], mat2[r][c], sum[r][c];
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);

    addMatrices(r, c, mat1, mat2, sum);

    printf("Sum of matrices:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
