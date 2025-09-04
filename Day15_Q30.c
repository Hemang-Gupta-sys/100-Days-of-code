//Q30: Write a program to reverse a given number.

#include <stdio.h>
int main() {
    int n, reversed = 0;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Reverse the number
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    
    // Print the result
    printf("%d\n", reversed);
    
    return 0;
} 
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/