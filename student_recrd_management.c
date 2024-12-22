#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
    struct Student *next;
};

// Function to create a new student record
struct Student* createStudent(int roll, char name[], float marks) {
    struct Student *newStudent = (struct Student *)malloc(sizeof(struct Student));
    newStudent->rollNumber = roll;
    strcpy(newStudent->name, name);
    newStudent->marks = marks;
    newStudent->next = NULL;
    return newStudent;
}

// Function to add a student record to the linked list
void addStudent(struct Student **head, int roll, char name[], float marks) {
    struct Student *newStudent = createStudent(roll, name, marks);
    newStudent->next = *head;
    *head = newStudent;
}

// Function to display all student records
void displayStudents(struct Student *head) {
    if (head == NULL) {
        printf("No student records found.\n");
        return;
    }
    
    printf("\nStudent Records:\n");
    printf("Roll No\t\t\t\tName\t\t\t\tMarks\n");
    printf("-----------------------------------------------------------\n");
    
    struct Student *current = head;
    while (current != NULL) {
        printf("%d\t\t--\t\t%s\t\t--\t\t%.2f\n", current->rollNumber, current->name, current->marks);
        current = current->next;
    }
}

// Function to search for a student by roll number
void searchStudent(struct Student *head, int roll) {
    struct Student *current = head;
    while (current != NULL) {
        if (current->rollNumber == roll) {
            printf("\nStudent Found:\n");
            printf("Roll No: %d\n", current->rollNumber);
            printf("Name: %s\n", current->name);
            printf("Marks: %.2f\n", current->marks);
            return;
        }
        current = current->next;
    }
    printf("Student with Roll No %d not found.\n", roll);
}

// Function to delete a student record by roll number
void deleteStudent(struct Student **head, int roll) {
    struct Student *temp = *head;
    struct Student *prev = NULL;
    
    if (temp != NULL && temp->rollNumber == roll) {
        *head = temp->next;
        free(temp);
        printf("Student with Roll No %d has been deleted.\n", roll);
        return;
    }

    while (temp != NULL && temp->rollNumber != roll) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Student with Roll No %d not found.\n", roll);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Student with Roll No %d has been deleted.\n", roll);
}

// Main function
int main() {
    struct Student *head = NULL;
    int choice, roll;
    char name[50];
    float marks;

    while (1) {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Delete Student by Roll No\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll);
                printf("Enter Name: ");
                getchar();  // To consume the newline character left by previous scanf
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';  // Remove the newline character at the end of the string
                printf("Enter Marks: ");
                scanf("%f", &marks);
                addStudent(&head, roll, name, marks);
                break;
            
            case 2:
                displayStudents(head);
                break;
            
            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);
                searchStudent(head, roll);
                break;
            
            case 4:
                printf("Enter Roll Number to Delete: ");
                scanf("%d", &roll);
                deleteStudent(&head, roll);
                break;
            
            case 5:
                printf("Exiting program...\n");
                exit(0);
            
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
