// 4. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.

#include <stdio.h>

int main() {
    int m, n; // Declare variables for input (m) and output (n)

    // Prompt the user to enter the value of m
    printf("Enter an integer value for m: ");
    scanf("%d", &m); // Read the integer value of m from the user

    // Use if-else statements to determine the value of n
    if (m > 0) { 
        n = 1; // Assign 1 to n if m is greater than 0
    } else if (m == 0) { 
        n = 0; // Assign 0 to n if m is equal to 0
    } else { 
        n = -1; // Assign -1 to n if m is less than 0
    }

    // Display the value of n
    printf("The value of n is: %d\n", n);

    return 0; // Return 0 to indicate successful execution of the program
}
