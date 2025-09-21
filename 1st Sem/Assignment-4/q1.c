/*
Q1) Enter the total purchase amount for a customer and calculate the amount
payable by the customer after discount, if a shopping mall announced the
following discounts on total purchase amount:
Purchase amount (RS) Discount
< 1000         -
1000-3000      5%
3001-6000      7%
6001-10000     10%
Above 10000    Rs 2000
*/

#include <stdio.h>

int main() {
    float amount, payable;

    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    if (amount < 1000) {
        payable = amount;
    } else if (amount <= 3000) {
        payable = amount - (amount * 0.05);
    } else if (amount <= 6000) {
        payable = amount - (amount * 0.07);
    } else if (amount <= 10000) {
        payable = amount - (amount * 0.10);
    } else {
        payable = amount - 2000;
    }

    printf("Amount payable: %.2f\n", payable);

    return 0;
}
