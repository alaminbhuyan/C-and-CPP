// 9. Write a C program use switch-case to find the grade of a student’s mark for any particular subject. For number greater than or equals to 80 the grade will be A+, for 70 or greater A, for 60 or greater B+, for 50 or greater B, for 40 or greater C, for 33 or greater D and for less than that F.
// •	Sample input: Enter mark: 53
// •	Sample output: Awarded grade: B


#include <stdio.h>

int main() {

    int mark;

    printf("Enter your mark in between (0 to 100): ");
    scanf("%d", &mark);

    switch (mark) {
        case 80 ... 100:
            printf("You get A+");
            break;
        case 75 ... 79:
            printf("You get A");
            break;
        case 70 ... 74:
            printf("You get A-");
            break;
        case 65 ... 69:
            printf("You get B+");
            break;
        case 60 ... 64:
            printf("You get B");
            break;
        case 55 ... 59:
            printf("You get B-");
            break;
        case 50 ... 54:
            printf("You get C+");
            break;
        case 45 ... 49:
            printf("You get C");
            break;
        case 40 ... 44:
            printf("You get D");
            break;
        case 0 ... 39:
            printf("You get F");
            break;
        default:
            printf("Invalid mark. Please enter a number between 0 and 100");

    }

    return 0;
}
