/*
Q4) Define a structure POINT having elements as Xco, and Yco. 
Enter two points and find the distance between them.
*/

#include <stdio.h>
#include <math.h>

struct POINT {
    float Xco;
    float Yco;
};

int main() {
    struct POINT p1, p2;

    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.Xco, &p1.Yco);
    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.Xco, &p2.Yco);

    float distance = sqrt((p2.Xco - p1.Xco)*(p2.Xco - p1.Xco) + (p2.Yco - p1.Yco)*(p2.Yco - p1.Yco));
    printf("Distance between points: %.2f\n", distance);

    return 0;
}
