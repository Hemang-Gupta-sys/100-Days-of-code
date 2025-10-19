//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // Calculate the sum of digits
    while (num > 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add it to sum
        num /= 10;       // Remove the last digit
    }
    // Output the result
    printf("Sum of digits is: %d\n", sum);
    return 0;   
}
/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/