//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first_digit, last_digit, num_digits = 0, temp_num, place_value = 1, swapped_num;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    temp_num = num;
    last_digit = temp_num % 10; // Get the last digit

    // Find the first digit and number of digits
    while (temp_num >= 10) {
        temp_num /= 10;
        place_value *= 10; // Calculate place value for the first digit
        num_digits++;
    }
    first_digit = temp_num; // The remaining temp_num is the first digit
    num_digits++; // Count the first digit

    // If there's only one digit, no swap needed
    if (num_digits == 1) {
        swapped_num = num;
    } else {
        // Remove first and last digits from the original number
        int middle_part = (num % place_value) / 10;

        // Construct the new number with swapped digits
        swapped_num = last_digit * place_value + middle_part * 10 + first_digit;
    }

    // Output the result
    printf("Number after swapping first and last digits: %d\n", swapped_num);
    
    return 0;
}
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/