/*
Q1) Enter the CGPA obtained by a student and find the equivalent percentage of marks.
Formula: Percentage = CGPA * 9.5
*/

#include <stdio.h>

int main() {
    float cgpa, percentage;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    percentage = cgpa * 9.5;
    printf("Equivalent Percentage = %.2f%%\n", percentage);
    return 0;
}
