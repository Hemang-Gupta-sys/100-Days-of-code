//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>
int main() {
    int num, originalNum, digit, sum = 0, factorial;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    originalNum = num;
    // Calculate the sum of factorials of each digit
    while (num > 0) {
        digit = num % 10; // Get the last digit
        // Calculate factorial of the digit
        factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial; // Add factorial to sum
        num /= 10; // Remove the last digit 
    }
    // Check if the sum of factorials is equal to the original number
    if (sum == originalNum) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/