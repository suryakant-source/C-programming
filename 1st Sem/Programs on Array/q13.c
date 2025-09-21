/*
Q13) Find the second largest element of an array
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int largest = arr[0], second = -2147483648; // minimum int
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if(second == -2147483648) {
        printf("No second largest element exists.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }

    return 0;
}
