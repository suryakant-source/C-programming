/*
Q13) Compute roots of quadratic equation ax^2 + bx + c = 0
Conditions:
- No solution if a and b are zero
- One root if determinant = 0
- No real roots if determinant < 0
- Otherwise two real roots
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 && b == 0) {
        printf("No solution\n");
    } else {
        d = b*b - 4*a*c;
        if (d == 0) {
            r1 = -b / (2*a);
            printf("One real root: %.2f\n", r1);
        } else if (d < 0) {
            printf("No real roots\n");
        } else {
            r1 = (-b + sqrt(d)) / (2*a);
            r2 = (-b - sqrt(d)) / (2*a);
            printf("Two real roots: %.2f and %.2f\n", r1, r2);
        }
    }

    return 0;
}
