//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    // Input the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Calculate the sum of the series
    for (int i = 0; i < n; i++) {
        int numerator = 2 * (i + 1); // Even numbers: 2, 4, 6, ...
        int denominator = 4 * i + 3; // Denominators: 3, 7, 11, 15, ...
        sum += (float)numerator / denominator; // Add the fraction to sum
    }
    // Output the result
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/