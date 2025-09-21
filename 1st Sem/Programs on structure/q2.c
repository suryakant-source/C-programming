/*
Q2) Define a structure BOOK having members as name, author, and price.
Enter the details of a book and display them.
*/

#include <stdio.h>

struct BOOK {
    char name[50];
    char author[50];
    float price;
};

int main() {
    struct BOOK b;
    
    printf("Enter book name: ");
    scanf("%s", b.name);
    printf("Enter author name: ");
    scanf("%s", b.author);
    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\nBook Details:\n");
    printf("Name: %s\n", b.name);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}
