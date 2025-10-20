//Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
    int num, sum_of_divisors = 0;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Calculate the sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i; // Add divisor to the sum
        }
    }

    // Check if the number is a perfect number
    if (sum_of_divisors == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    
    return 0;
}

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/