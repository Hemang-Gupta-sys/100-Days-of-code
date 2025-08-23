//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    int radius;
    float area, circumference;
    const float PI = 3.14159;

    // Input radius from the user
    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    
    return 0;   
}


/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/