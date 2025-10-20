//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int num, product = 1, digit;
    int has_odd = 0;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // Calculate the product of odd digits
    while (num > 0) {
        digit = num % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply it to product
            has_odd = 1;
        }
        num /= 10; // Remove the last digit 

    }
    // If no odd digits were found, set product to 1
    if (!has_odd) {
        product = 1;
    }   
    // Output the result
    printf("Product of odd digits is: %d\n", product);
    return 0;
}
/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/