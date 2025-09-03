//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Calculate the sum of the first n odd numbers
    for (int i = 0; i < n; i++) {
        sum += (2 * i + 1); // The ith odd number is (2*i + 1)
    }
    
    // Print the result
    printf("%d\n", sum);
    
    return 0;
}
/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/