// 1. Write a C program to print the following characters in reverse. Test Characters: 'X', 'M', 'L’, Expected Output: The reverse of XML is LMX.

#include <stdio.h>
int main()
{
    char char1 = 'X', char2 = 'M', char3 = 'L';

    printf("Before reversing: %c%c%c\n", char1, char2, char3);
    printf("After reversing: %c%c%c", char3, char2, char1);

    return 0;
}