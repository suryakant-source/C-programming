/*
Q8) Find area of a rectangle, given length and height.
*/

#include <stdio.h>

int main() {
    int length, height, area;
    printf("Enter length and height: ");
    scanf("%d %d", &length, &height);
    area = length * height;
    printf("Area of rectangle = %d\n", area);
    return 0;
}
