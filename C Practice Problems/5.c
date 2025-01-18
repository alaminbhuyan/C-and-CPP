// 5. Write a C program to check if a user is eligible to vote. The eligibility age is 18 years or older.

#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("User is eligible to vote");
    } else {
        printf("User is not eligible to vote");
    }

    // (age >= 18) ? printf("User is eligible to vote") : printf("User is not eligible to vote");

    return 0;
}