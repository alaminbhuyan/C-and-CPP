// 2. Write a C program to find the largest of three numbers entered by the user using nested if-else.

#include <stdio.h>

int main() {
    int num1, num2, num3; // Declare variables to store the three numbers
    int largest;         // Declare a variable to store the largest number

    // Prompt the user to enter three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1); // Read the first number from the user

    printf("Enter the second number: ");
    scanf("%d", &num2); // Read the second number from the user

    printf("Enter the third number: ");
    scanf("%d", &num3); // Read the third number from the user
    
    // You can also take inputs like this way
    // printf("Enter your three numbers: ");
    // scanf("%d%d%d", &num1, &num2, &num3);

    // Start the nested if-else to determine the largest number
    if (num1 >= num2) { // Check if num1 is greater than or equal to num2
        if (num1 >= num3) { // Check if num1 is also greater than or equal to num3
            largest = num1; // If true, num1 is the largest
        } else {
            largest = num3; // If false, num3 is the largest
        }
    } else { // If num1 is less than num2
        if (num2 >= num3) { // Check if num2 is greater than or equal to num3
            largest = num2; // If true, num2 is the largest
        } else {
            largest = num3; // If false, num3 is the largest
        }
    }

    // Display the largest number to the user
    printf("The largest number is: %d\n", largest);

    return 0; // Return 0 to indicate successful execution of the program
}
