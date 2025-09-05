//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int n, original, reversed = 0, remainder;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    original = n; // Store the original number for comparison
    
    // Reverse the number
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        n /= 10; // Remove the last digit from n
    }
    
    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}   
/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/