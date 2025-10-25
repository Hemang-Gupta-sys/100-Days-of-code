/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/