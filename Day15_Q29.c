//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n;
    long long factorial = 1; // Use long long to handle large factorials
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Calculate the factorial of the number
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Multiply to get factorial
    }
    
    // Print the result
    printf("%lld\n", factorial);
    
    return 0;
} 
/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/