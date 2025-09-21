/*
Q10) Allocate memory dynamically for an integer array and check whether
an entered element is present or not
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, key, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
        if(arr[i] == key) {
            found = 1;
            break;
        }

    if(found) printf("%d is present in the array.\n", key);
    else printf("%d is not present in the array.\n", key);

    free(arr);
    return 0;
}
