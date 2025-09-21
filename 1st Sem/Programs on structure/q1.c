/*
Q1) Define a structure STUDENT having members as: name, roll_no, and marks.
Enter the details of one student and display the details.
*/

#include <stdio.h>

struct STUDENT {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct STUDENT s;
    
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
