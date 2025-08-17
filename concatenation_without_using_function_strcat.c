#include<stdio.h>
#include<conio.h>
void concatenate(char [], char []); // Function prototype for concatenation
int main()
{
    char s1[50], s2[50];
    printf("Enter first string: ");
    gets (s1); // Read first string
    printf("Enter second string: ");
    gets (s2); // Read second string
    concatenate(s1, s2); // Call the concatenate function
    printf("Concatenated string: %s\n", s1); // Print the concatenated string
    return 0;
}

void concatenate(char s1[], char s2[])
{
    int i, j;
    i=0;
    while (s1[i] != '\0') // Find the end of the first string
    {
        i++;
    }
    j=0;
    while (s2[j] != '\0') // Append the second string to the first
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0'; // Null-terminate the concatenated string
}
