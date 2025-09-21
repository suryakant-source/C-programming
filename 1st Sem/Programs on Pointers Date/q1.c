/*
Q1) Find the sum of all array elements using pointer
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], sum = 0;
    int *ptr = arr;

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum of array elements: %d\n", sum);
    return 0;
}
