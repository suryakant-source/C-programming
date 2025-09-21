/*
Q8) Calculate the distance between two points (x1, y1) and (x2, y2).
Formula: d = sqrt((x2-x1)^2 + (y2-y1)^2)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, d;
    printf("Enter coordinates (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance = %.2f\n", d);
    return 0;
}
