/*
Q8) Use malloc() to dynamically allocate memory for an integer array,
enter elements, find sum, and free the allocated memory.
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

    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];

    printf("Sum of array elements: %d\n", sum);

    free(arr);  // Free allocated memory
    return 0;
}
