//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    int celsius;
    float fahrenheit;

    // Input temperature in Celsius from the user
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display the result
    printf("Fahrenheit=%.0f\n", fahrenheit);
    
    return 0;   
}

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/