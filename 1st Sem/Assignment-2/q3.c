/*
Q3) Find the percentage of marks obtained by a student by entering the marks secured
in 5 subjects. Each subject has 100 marks.
*/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float percentage;
    printf("Enter marks in 5 subjects (out of 100): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    percentage = (m1 + m2 + m3 + m4 + m5) / 5.0;
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
