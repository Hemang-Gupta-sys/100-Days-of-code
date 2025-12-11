//Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
// Function to write employee data to a binary file
void writeEmployeeData(const char *filename, struct Employee emp) {
    FILE *file = fopen(filename, "ab"); // Open in append binary mode
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
}
// Function to read employee data from a binary file
void readEmployeeData(const char *filename) {
    FILE *file = fopen(filename, "rb"); // Open in read binary mode
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    struct Employee emp;
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        printf("Name: %s | ID: %d | Salary: %.2f\n", emp.name, emp.id, emp.salary);
    }
    fclose(file);
}
int main() {
    struct Employee emp;
    const char *filename = "employees.dat";

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Write to binary file
    writeEmployeeData(filename, emp);

    // Read from binary file
    printf("\nEmployee data read from file:\n");
    readEmployeeData(filename);

    return 0;
}   

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/