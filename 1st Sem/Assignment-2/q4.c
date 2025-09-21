/*
Q4) Calculate the gross salary of an employee.
DA = 42% of basic, HRA = 30% of basic, OA = 2000
Gross = Basic + DA + HRA + OA
*/

#include <stdio.h>

int main() {
    float basic, da, hra, gross;
    int oa = 2000;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = 0.42 * basic;
    hra = 0.30 * basic;
    gross = basic + da + hra + oa;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
