/*
Q2) Enter the previous month and current month meter reading. Calculate the electric
bill amount for any customer as per the following rules:
First 100 units  : Rs 3.20 per unit.
Next 200 units  : Rs 5.40 per unit.
Remaining units : Rs 6 per unit
*/

#include <stdio.h>

int main() {
    int prev, curr, units;
    float bill = 0;

    printf("Enter previous reading: ");
    scanf("%d", &prev);

    printf("Enter current reading: ");
    scanf("%d", &curr);

    units = curr - prev;

    if (units <= 100) {
        bill = units * 3.20;
    } else if (units <= 300) {
        bill = (100 * 3.20) + (units - 100) * 5.40;
    } else {
        bill = (100 * 3.20) + (200 * 5.40) + (units - 300) * 6;
    }

    printf("Total bill amount: %.2f\n", bill);

    return 0;
}
