//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main() {
    int number;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero using nested if-else
    if (number < 0) {
        printf("Negative\n");
    } else {
        if (number == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    }

    return 0;
}
/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/