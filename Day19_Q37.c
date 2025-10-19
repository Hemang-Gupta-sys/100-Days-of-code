//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, lcm, i;
    // Input two numbers from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    // Find LCM
    lcm = (num1 > num2) ? num1 : num2; // Start from the greater number
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm++;
    }
    // Output the result
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/