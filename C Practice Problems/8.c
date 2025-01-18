// 8. Write a C program to perform addition, subtraction, multiplication, and division based on user input using a switch statement.

#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    // Prompt user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Prompt user to enter the operation
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);


    // Perform the operation using switch-case
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation. Please enter +, -, *, or /.\n");
    }

    return 0;
}
