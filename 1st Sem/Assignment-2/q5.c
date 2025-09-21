/*
Q5) Convert an input total number of days into years, months, and remaining days.
(1 year = 365 days, 1 month = 30 days)
*/

#include <stdio.h>

int main() {
    int days, years, months, rem;
    printf("Enter total days: ");
    scanf("%d", &days);
    years = days / 365;
    days = days % 365;
    months = days / 30;
    rem = days % 30;
    printf("%d year(s), %d month(s), %d day(s)\n", years, months, rem);
    return 0;
}
