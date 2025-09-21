/*
Q10) Insert an element into a specific location in a partially filled array
*/

#include <stdio.h>

int main() {
    int n, pos, elem;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assuming max size 100
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &elem);
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return 0;
    }

    for(int i = n; i >= pos; i--) arr[i] = arr[i-1];
    arr[pos-1] = elem;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
