/*
Q4) Count how many even elements are present in an array
*/

#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }

    printf("Number of even elements: %d\n", count);
    return 0;
}
