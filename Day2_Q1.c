//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    int length, breadth;
    int area, perimeter;

    // Input length and breadth from the user
    printf("Enter length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;   
}   
/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/