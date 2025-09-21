/*
Q3) Define a structure STUDENT having members as: name, roll_no, and marks
Enter the details of two students and display them in a tabular format.
*/

#include <stdio.h>

struct STUDENT {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct STUDENT s[2];
    
    for(int i = 0; i < 2; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Name: "); scanf("%s", s[i].name);
        printf("Roll No: "); scanf("%d", &s[i].roll_no);
        printf("Marks: "); scanf("%f", &s[i].marks);
    }

    printf("\n%-15s %-10s %-10s\n", "Name", "Roll No", "Marks");
    for(int i = 0; i < 2; i++)
        printf("%-15s %-10d %-10.2f\n", s[i].name, s[i].roll_no, s[i].marks);

    return 0;
}
