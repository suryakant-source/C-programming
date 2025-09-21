/*
Q8) Create a menu-driven program using switch–case statement that will ask the user
to enter two numbers and an operator (+, -, *, /). When the user enters a valid
choice, the program prints the result of the respective operation as per the entered
choice, otherwise prints an error message.
*/

#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+': result = a + b; printf("Result = %.2f\n", result); break;
        case '-': result = a - b; printf("Result = %.2f\n", result); break;
        case '*': result = a * b; printf("Result = %.2f\n", result); break;
        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
