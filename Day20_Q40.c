//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main() {
    int num, digit, complement = 0, place =1;
    // Input a binary number from the user 
    printf("Enter a binary number: ");
    scanf("%d", &num);
    // Calculate the 1's complement
    while (num > 0) {
        digit = num % 10; // Get the last digit
        if (digit == 0) {
            complement += 1 * place; // Change 0 to 1
        } else if (digit == 1) {
            complement += 0 * place; // Change 1 to 0
        } else {
            printf("Invalid binary number.\n");
            return 1; // Exit if not a binary digit
        }
        num /= 10; // Remove the last digit
        place *= 10; // Move to the next place value
    }
    // Output the result
    printf("1's complement is: %d\n", complement);
    
    return 0;
}

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/