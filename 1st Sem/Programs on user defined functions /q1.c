/*
Q1) Find the area of a circle using function
*/

#include <stdio.h>
#define PI 3.14159

float areaCircle(float r) {
    return PI * r * r;
}

int main() {
    float radius;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    float area = areaCircle(radius);
    printf("Area of the circle: %.2f\n", area);
    return 0;
}
