// 13.	Write a C program to calculate the distance between two points.
// •	Test Data:
// •	Input x1: 25
// •	Input y1: 15
// •	Input x2: 35
// •	Input y2: 10
// •	Expected Output:
// •	Distance between the said points: 11.1803

#include <stdio.h>
#include <math.h>

int main(){
    // Declare variables for the coordinates
    float x1, y1, x2, y2, distance;

    // Input the coordinates
    printf("Enter your x1, y1, x2, y2 coordinates: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    // Calculate the distance using Euclidean distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print the distance
    printf("Distance between the two points: %.4f\n", distance);


    return 0;
}