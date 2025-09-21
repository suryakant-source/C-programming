/*
Q5) Find sum of all rows and columns separately
*/

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Sum of rows
    for(int i = 0; i < r; i++) {
        int rowSum = 0;
        for(int j = 0; j < c; j++)
            rowSum += mat[i][j];
        printf("Sum of row %d: %d\n", i+1, rowSum);
    }

    // Sum of columns
    for(int j = 0; j < c; j++) {
        int colSum = 0;
        for(int i = 0; i < r; i++)
            colSum += mat[i][j];
        printf("Sum of column %d: %d\n", j+1, colSum);
    }

    return 0;
}
