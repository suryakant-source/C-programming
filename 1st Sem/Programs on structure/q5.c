/*
Q5) Define a structure EMPLOYEE having members as name, id, and salary.
Enter the details of 5 employees (using array of structure) and display the details.
*/

#include <stdio.h>

struct EMPLOYEE {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct EMPLOYEE e[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: "); scanf("%s", e[i].name);
        printf("ID: "); scanf("%d", &e[i].id);
        printf("Salary: "); scanf("%f", &e[i].salary);
    }

    printf("\n%-15s %-10s %-10s\n", "Name", "ID", "Salary");
    for(int i = 0; i < 5; i++)
        printf("%-15s %-10d %-10.2f\n", e[i].name, e[i].id, e[i].salary);

    return 0;
}
