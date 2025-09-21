/*
Q15) Enter total price of food order. Restaurant charges 12% GST.
If total exceeds 1000, offer 5% discount, else no discount.
Print final amount using conditional operator.
*/

#include <stdio.h>

int main() {
    float price, final;
    printf("Enter total price: ");
    scanf("%f", &price);
    final = price + (price * 0.12); // add GST
    final = (final > 1000) ? (final - (final * 0.05)) : final; // discount if >1000
    printf("Final Amount = %.2f\n", final);
    return 0;
}
