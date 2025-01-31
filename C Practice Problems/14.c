// 14. Write a C program to print the multiplication tables for numbers from 1 to 3. Each table should display the multiplication results from 1 to 10, and there should be a blank line separating the tables for different numbers. Use nested for loops to implement the program.

#include <stdio.h>
int main()
{
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i*j);
        }

        printf("\n");
    }

    return 0;
}