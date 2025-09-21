/*
Q6) Search a particular element is present in an array or not
*/

#include <stdio.h>

int main() {
    int n, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("%d is present in the array.\n", key);
    } else {
        printf("%d is not present in the array.\n", key);
    }

    return 0;
}
