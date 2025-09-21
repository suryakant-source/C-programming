/*
Q7) Define a structure PRODUCT having members as Pname, PId, and price.
Enter the details of 3 products and display the details using pointer
*/

#include <stdio.h>

struct PRODUCT {
    char Pname[50];
    int PId;
    float price;
};

int main() {
    struct PRODUCT prod[3];
    struct PRODUCT *ptr = prod;

    for(int i = 0; i < 3; i++) {
        printf("Enter details of product %d:\n", i+1);
        printf("Product Name: "); scanf("%s", (ptr + i)->Pname);
        printf("Product ID: "); scanf("%d", &(ptr + i)->PId);
        printf("Price: "); scanf("%f", &(ptr + i)->price);
    }

    printf("\n%-15s %-10s %-10s\n", "Product Name", "PId", "Price");
    for(int i = 0; i < 3; i++) {
        printf("%-15s %-10d %-10.2f\n", (ptr + i)->Pname, (ptr + i)->PId, (ptr + i)->price);
    }

    return 0;
}
