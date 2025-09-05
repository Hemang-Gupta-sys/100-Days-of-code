//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main(){
    int n;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Array to store binary digits
    int binary[32]; // Assuming a 32-bit integer
    int index = 0;
    
    // Convert to binary
    if (n == 0) {
        binary[index++] = 0; // Handle the case for 0 explicitly
    } else {
        while (n > 0) {
            binary[index++] = n % 2; // Store the remainder (0 or 1)
            n /= 2; // Divide n by 2
        }
    }
    
    // Print the binary representation in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    
    return 0;
} 
/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/