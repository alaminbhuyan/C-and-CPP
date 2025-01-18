// 3. Write a C program to check whether a given number is positive or negative.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d is a positive number", num);
    } else {
        printf("%d is a negative number", num);
    }
    return 0;
}