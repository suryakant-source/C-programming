/*
Q10) Calculate total bill for 3 products with quantities.
Add 10% tax to the total.
*/

#include <stdio.h>

int main() {
    float p1, p2, p3, total;
    int q1, q2, q3;
    printf("Enter price and quantity of product 1: ");
    scanf("%f %d", &p1, &q1);
    printf("Enter price and quantity of product 2: ");
    scanf("%f %d", &p2, &q2);
    printf("Enter price and quantity of product 3: ");
    scanf("%f %d", &p3, &q3);
    total = (p1*q1 + p2*q2 + p3*q3);
    total += total * 0.10; // add 10% tax
    printf("Total bill = %.2f\n", total);
    return 0;
}
