/*
Q9) Allocate memory dynamically for an array and find the largest element
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max) max = arr[i];

    printf("Largest element: %d\n", max);

    free(arr);
    return 0;
}
