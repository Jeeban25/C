#include <stdio.h>
#include <string.h>

/*
   Program: Store and display multiple students' data using array of structures
   Concepts:
   1. Structure definition
   2. Array of structures
   3. String input with fgets (handles spaces)
   4. Accessing members using dot operator
*/

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[5];  // array of 5 students

    // Input student details
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name : ");
        fflush(stdin); // clear input buffer (for Windows/MinGW; not portable, but works here)
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; // remove newline from fgets

        printf("Enter roll no. : ");
        scanf("%d", &s[i].roll);

        printf("Enter marks : ");
        scanf("%f", &s[i].marks);

        getchar(); // consume leftover newline before next fgets
    }

    // Display student details
    printf("\n--- Students' Data ---\n");
    printf("Name\t\t\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%-20s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
