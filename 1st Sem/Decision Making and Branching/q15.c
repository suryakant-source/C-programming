/*
Q15) Calculate age from DOB and current date.
Assume 1 month = 30 days, 1 year = 365 days.
*/

#include <stdio.h>

int main() {
    int dd1, mm1, yy1; // DOB
    int dd2, mm2, yy2; // Current Date
    int d, m, y;

    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &dd1, &mm1, &yy1);
    printf("Enter Current Date (dd mm yyyy): ");
    scanf("%d %d %d", &dd2, &mm2, &yy2);

    if (dd2 < dd1) {
        dd2 += 30;
        mm2 -= 1;
    }
    d = dd2 - dd1;

    if (mm2 < mm1) {
        mm2 += 12;
        yy2 -= 1;
    }
    m = mm2 - mm1;
    y = yy2 - yy1;

    printf("Age: %d years %d months %d days\n", y, m, d);
    return 0;
}
