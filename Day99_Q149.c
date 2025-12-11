//Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
// Function to allocate memory for a student and input details
struct Student* createStudent() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter student name: ");
    scanf("%s", s->name);
    printf("Enter student roll number: ");
    scanf("%d", &s->roll);
    printf("Enter student marks: ");
    scanf("%f", &s->marks);
    return s;
}
// Function to print student details
void printStudent(struct Student *s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s->name, s->roll, s->marks);
}
int main() {
    struct Student *student = createStudent(); // Allocate memory and input details
    printStudent(student); // Print student details
    free(student); // Free allocated memory
    return 0;
}


/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/