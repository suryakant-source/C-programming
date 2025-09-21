/*
Q12) Merge the contents of two arrays into a third array
*/

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for(int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for(int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int arr3[n1+n2];
    for(int i = 0; i < n1; i++) arr3[i] = arr1[i];
    for(int i = 0; i < n2; i++) arr3[n1+i] = arr2[i];

    printf("Merged array: ");
    for(int i = 0; i < n1+n2; i++) printf("%d ", arr3[i]);
    printf("\n");

    return 0;
}
