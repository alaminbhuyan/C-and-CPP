#include <stdio.h>

int main() {
    int mark;

    printf("Enter the mark: ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100) {
        printf("Invalid mark. Please enter a value between 0 and 100.\n");
        return 1;
    }

    if (mark < 33) {
        printf("Awarded grade: F\n");
    } else {
        switch (mark / 10) {
            case 10: // Fall-through for marks 100
            case 9:
            case 8:
                printf("Awarded grade: A+\n");
                break;
            case 7:
                printf("Awarded grade: A\n");
                break;
            case 6:
                printf("Awarded grade: B+\n");
                break;
            case 5:
                printf("Awarded grade: B\n");
                break;
            case 4:
                printf("Awarded grade: C\n");
                break;
            case 3:
                printf("Awarded grade: D\n");
                break;
        }
    }

    return 0;
}
