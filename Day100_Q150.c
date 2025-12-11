//Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
// Function to create a student and input details
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
// Function to modify student details using pointer
void modifyStudent(struct Student *s) {
    printf("Modify student name: ");
    scanf("%s", s->name);
    printf("Modify student roll number: ");
    scanf("%d", &s->roll);
    printf("Modify student marks: ");
    scanf("%f", &s->marks);
}
// Function to print student details using pointer
void printStudent(struct Student *s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s->name, s->roll, s->marks);
}
int main() {
    struct Student *student = createStudent(); // Create student and input details
    printStudent(student); // Print initial details

    modifyStudent(student); // Modify student details
    printf("Modified Data:\n");
    printStudent(student); // Print modified details

    free(student); // Free allocated memory
    return 0;
}


/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/