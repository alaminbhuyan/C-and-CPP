// 10. Write a C program to input a number (1–7) and display the corresponding day of the week using a switch statement.

#include <stdio.h>

int main() {

    int day;

    printf("Enter a number for the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        default:
            printf("Invalid number. Please enter a number between 0 and 7");

    }

    return 0;
}