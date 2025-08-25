#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Step 1: Define a structure
struct Student 
{
    int roll;
    char name[50];
    float marks;
};

// Function to display student details (passing structure by value)
void displayStudent(struct Student s) 
{
    printf("\n--- Student Information ---\n");
    printf("Roll No   : %d\n", s.roll);
    printf("Name      : %s\n", s.name);
    printf("Marks     : %f\n", s.marks);
}

// Function to take input (passing structure by pointer)
void inputStudent(struct Student *s) 
{
    printf("Enter Roll No: ");
    scanf("%d", &s->roll); 
    getchar(); // to clear newline left by scanf

    printf("Enter Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';  // remove newline

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

int main() 
{
    // Step 2: Declare structure variable
    struct Student st1;

    // Step 3: Input using pointer (arrow operator)
    printf("Enter details of student:\n");
    inputStudent(&st1);

    // Step 4: Output using dot operator
    displayStudent(st1);

    // Step 5: Demonstrate pointer access
    struct Student *ptr = &st1;
    printf("\n(Access via pointer -> )\n");
    printf("Roll = %d, Name = %s, Marks = %.2f\n", ptr->roll, ptr->name, ptr->marks);

    return 0;
}
