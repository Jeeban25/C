#include<stdio.h>
#include<conio.h>
#include<string.h> // Include string.h for string functions
void read(char [][50], int); // Function prototype for reading strings
void arrange(char [][50], int); // Function prototype for arranging strings
void display(char [][50], int); // Function prototype for displaying strings
int main()
{
    char str[50][50]; // Array to hold 50 strings of maximum length 50
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n); // Read the number of strings
    read(str, n); // Call function to read strings
    arrange(str, n); // Call function to arrange strings in ascending order
    display(str, n); // Call function to display arranged strings
    getch();
    return 0;
}

// Function to read n strings from user
void read(char str[][50], int n)
{
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]); // Read each string
    }
}


// Function to arrange strings in ascending order

void arrange(char str[][50], int n)
{
    char temp[50]; // Temporary variable for swapping
    for (int i = 0; i < n; i++) 
    {
    for (int j = 0; j < n-1; j++) 
    {
        if (strcmp(str[j], str[i]) > 0) 
        {
            strcpy(temp, str[i]); // copy str[i] to temp
            strcpy(str[i], str[j]); // copy str[j] to str[i]
            strcpy(str[j], temp); // copy temp to str[j]
        }
    }
}
}

// Function to display strings in ascending order

void display(char str[][50], int n)
{
   printf("Strings in Dictionary order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]); // Print each string in dictionary order
    }
}