//Q24: Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>
int main() {
    int units;
    float bill;
    // Input number of units consumed from the user
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    
    // Calculate bill based on the number of units consumed
    if (units <= 100) {
        bill = units * 2.5; // ₹2.5 per unit for first 100 units
        printf("Bill: ₹%.2f\n", bill);
    } else if (units <= 200) {
        bill = (100 * 2.5) + ((units - 100) * 4); // ₹4 per unit for next 100 units
        printf("Bill: ₹%.2f\n", bill);
    } else {
        bill = (100 * 2.5) + (100 * 4) + ((units - 200) * 6); // ₹6 per unit for units above 200
        printf("Bill: ₹%.2f\n", bill);
    }
    
    return 0;
}
/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/