// 21. Write a C program to find whether a year is leap year or not. 
// • [Note: if a year is completely divisible by 400 then it’s a leap year, otherwise if it’s divided by 100 then it’s not and finally if it’s divided by 4 then it’s a leap year. On other cases the year is not a leap year.]


#include <stdio.h>

int main() {
    int year;

    // Input year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
