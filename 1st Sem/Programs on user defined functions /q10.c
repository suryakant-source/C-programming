/*
Q10) Design a function to search whether an element is present in an array or not
*/

#include <stdio.h>

int search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key) return 1;
    return 0;
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    if(search(arr, n, key))
        printf("%d is present in the array.\n", key);
    else
        printf("%d is not present in the array.\n", key);

    return 0;
}
