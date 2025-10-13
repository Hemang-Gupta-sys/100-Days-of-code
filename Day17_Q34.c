//Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is prime
    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/