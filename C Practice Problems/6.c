// 6. Write a C program to reverse a given integer using a while loop.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number using a while loop
    while (num != 0) {
        remainder = num % 10;         // Get the last digit
        printf("Remainder: %d\n", remainder);
        printf("---------------------\n");
        reversed = reversed * 10 + remainder; // Append the digit to the reversed number
        printf("Reversed: %d\n", reversed);
        printf("---------------------\n");
        num /= 10;                    // Remove the last digit
        printf("Number: %d\n", num);
        printf("---------------------\n");
    }

    // Output the reversed number
    printf("Reversed integer: %d\n", reversed);

    return 0;
}
