/*
Q12) Print grade using else-if ladder:
90-100: O
80-89: E
70-79: A
60-69: B
50-59: C
40-49: D
<40: U
*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
        printf("Grade: O\n");
    else if (marks >= 80)
        printf("Grade: E\n");
    else if (marks >= 70)
        printf("Grade: A\n");
    else if (marks >= 60)
        printf("Grade: B\n");
    else if (marks >= 50)
        printf("Grade: C\n");
    else if (marks >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: U\n");

    return 0;
}
