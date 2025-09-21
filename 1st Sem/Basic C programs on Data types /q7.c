/*
Q7) Find the multiplication results of two integers and print the result.
*/

#include <stdio.h>

int main() {
    int a, b, product;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    product = a * b;
    printf("Product = %d\n", product);
    return 0;
}
