//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int num1, num2, temp;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swap the numbers using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped results
    printf("After swap: %d %d\n", num1, num2);

    return 0;
}

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/