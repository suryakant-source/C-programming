/*
Q7) Find element-wise addition results of two arrays
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];
    printf("Enter elements of first array:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr1[i]);

    printf("Enter elements of second array:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr2[i]);

    printf("Element-wise addition: ");
    for(int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
        printf("%d ", sum[i]);
    }
    printf("\n");
    return 0;
}
