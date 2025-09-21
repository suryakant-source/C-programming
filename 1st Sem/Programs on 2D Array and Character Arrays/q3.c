/*
Q3) Find the sum of the diagonal elements of any matrix
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(int i = 0; i < n; i++)
        sum += mat[i][i];

    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
