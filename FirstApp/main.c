#include <stdio.h>

// Define a structure to hold student data
const int max_students = 100;

typedef struct {
    int roll;
    char name[20];
    double gp;
    int max_students;
} Student;

// Function to input data for a new student record
void inputStudent(Student *sp, const int max_students, Student students[], int numStudents) {
    printf("Enter roll: ");
    scanf("%d", &sp->roll);

    // Check if the entered roll number is valid and unique
    if (sp->roll < 1 || sp->roll > max_students || students[sp->roll - 1].roll != 0) {
        printf("Invalid or duplicate roll number. Please try again.\n");
        return; // Return without creating a new record
    }

    printf("Enter name: ");
    scanf(" %[^\n]", sp->name);

    printf("Enter grade point: ");
    scanf("%lf", &sp->gp);
}

// Function to print the data of a student record
void printStudent(Student sp) {
    printf("Roll: %4d, Name: %-20s GPA: %10.2lf\n", sp.roll, sp.name, sp.gp);
}

// Function to print selected student data based on roll number
void printSelectedStudentData(Student students[], int numStudents) {
    int searchRollNumber;
    printf("Enter the Roll Number: ");
    scanf("%d", &searchRollNumber);

    // Search for a matching roll number in the array of student records
    for (int i = 0; i < numStudents; i++) {
        if (students[i].roll == searchRollNumber) {
            printStudent(students[i]);
            return; // Return once a match is found to avoid unnecessary iteration
        }
    }

    // If no matching roll number was found, display an error message
    printf("Student with Roll Number %d not found.\n", searchRollNumber);
}

// Function to add student data
void addStudentData(Student students[], int *numStudents) {
    if (*numStudents >= max_students) {
        printf("Maximum number of students reached.\n");
        return;
    }

    Student newStudent = {0}; // Initialize a new student with zero values
    int rollNumber, duplicateCheck;

    do {
        duplicateCheck = 0;
        printf("Enter Roll Number: ");
        scanf("%d", &rollNumber);

        for (int i = 0; i < *numStudents; i++) {
            if (students[i].roll == rollNumber) {
                duplicateCheck = 1;
                printf("Invalid or duplicate roll number. Please try again.\n");
                break;
            }
        }
    } while (duplicateCheck); // Repeat until a unique and valid roll number is entered

    newStudent.roll = rollNumber;
    printf("Enter Name: ");
    scanf("%s", newStudent.name);
    printf("Enter GPA: ");
    scanf("%lf", &newStudent.gp);

    students[*numStudents] = newStudent; // Add the new student to the array
    (*numStudents)++; // Increment the number of students in memory
}


int main(void) {
    const int max_students = 100; // Maximum number of students that can be stored
    Student students[max_students] = {0}; // Array to hold student records
    int numStudents = 0; // Current number of students
    int selection; // User's menu selection
    Student s; // Temporary Student structure for input

    do {
        printf("Enter Mode:\n1. Add Data\n2. Print Selected Data\n3. Print All Data\n4. Exit\n");
        scanf("%d", &selection);

        switch (selection) {
            case 1:
                // Add Data option: Create a new student record if there's room for more students
                addStudentData(students, &numStudents);
                break;
            case 2:
                // Print Selected Data option:
                printSelectedStudentData(students, numStudents);
                
                break;
            case 3:
                // Print All Data option: Print data for all existing student records
                if (numStudents > 0) {
                    for (int i = 0; i < numStudents; i++) {
                        printStudent(students[i]);
                    }
                } else {
                    printf("No students data to display.\n");
                }
                break;
            case 4:
                // Exit option: Print an exit message and end the program
                printf("Exiting the program.\n");
                break;
            default:
                // Handle invalid menu selections
                printf("Invalid selection. Please try again.\n");
        }
    } while (selection != 4); // Continue looping as long as the user hasn't selected to exit

    return 0;
}

