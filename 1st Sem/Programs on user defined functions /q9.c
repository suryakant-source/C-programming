/*
Q9) Find the largest element of an array using function
*/

#include <stdio.h>

int largest(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max) max = arr[i];
    return max;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Largest element: %d\n", largest(arr, n));
    return 0;
}
