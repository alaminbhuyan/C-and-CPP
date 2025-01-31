// 11. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

#include <stdio.h>

int main() {
    // Declare variables for height, width, perimeter, and area
    int height = 7, width = 5, perimeter, area;

    // Calculate the perimeter and area
    perimeter = 2 * (height + width);
    area = height * width;

    // Print the results
    printf("Height: %d inches\n", height);
    printf("Width: %d inches\n", width);
    printf("Perimeter of the rectangle: %d inches\n", perimeter);
    printf("Area of the rectangle: %d square inches\n", area);

    // printf("Height: %d inches\nWidth: %d inches\nPerimeter of the rectangle: %d inches\nArea of the rectangle: %d", height, width, perimeter, area);

    return 0;
}
