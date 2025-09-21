/*
Q14) Calculate income tax as per slabs:
0–300000: 0%
300001–700000: 5%
700001–1000000: 10%
1000001–1200000: 15%
1200001–1500000: 20%
>1500000: 30%
*/

#include <stdio.h>

int main() {
    float income, tax = 0;
    printf("Enter total taxable income: ");
    scanf("%f", &income);

    if (income <= 300000)
        tax = 0;
    else if (income <= 700000)
        tax = (income - 300000) * 0.05;
    else if (income <= 1000000)
        tax = (400000 * 0.05) + (income - 700000) * 0.10;
    else if (income <= 1200000)
        tax = (400000 * 0.05) + (300000 * 0.10) + (income - 1000000) * 0.15;
    else if (income <= 1500000)
        tax = (400000 * 0.05) + (300000 * 0.10) + (200000 * 0.15) + (income - 1200000) * 0.20;
    else
        tax = (400000 * 0.05) + (300000 * 0.10) + (200000 * 0.15) + (300000 * 0.20) + (income - 1500000) * 0.30;

    printf("Income Tax = %.2f\n", tax);
    return 0;
}
