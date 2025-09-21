/*
Q6) Define a structure STUDENT having members as name, roll_no, branch, and CGPA.
Enter the details of 5 students. Display the details of the student having the highest CGPA.
*/

#include <stdio.h>

struct STUDENT {
    char name[50];
    int roll_no;
    char branch[20];
    float CGPA;
};

int main() {
    struct STUDENT s[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Name: "); scanf("%s", s[i].name);
        printf("Roll No: "); scanf("%d", &s[i].roll_no);
        printf("Branch: "); scanf("%s", s[i].branch);
        printf("CGPA: "); scanf("%f", &s[i].CGPA);
    }

    int maxIndex = 0;
    for(int i = 1; i < 5; i++)
        if(s[i].CGPA > s[maxIndex].CGPA) maxIndex = i;

    printf("\nStudent with highest CGPA:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll No: %d\n", s[maxIndex].roll_no);
    printf("Branch: %s\n", s[maxIndex].branch);
    printf("CGPA: %.2f\n", s[maxIndex].CGPA);

    return 0;
}
