/*
Q6) Input weight in grams and convert to KG and remaining grams.
*/

#include <stdio.h>

int main() {
    int grams, kg, rem;
    printf("Enter weight in grams: ");
    scanf("%d", &grams);
    kg = grams / 1000;
    rem = grams % 1000;
    printf("%d KG %d grams\n", kg, rem);
    return 0;
}
