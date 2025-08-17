#include<stdio.h>
#include<conio.h>
int strLength(char[]); // Function prototype for finding string length
int main()
{
    char str[100];
    int length;
    printf("Enter a string: ");
    gets(str); // Read the string input
    length = strLength(str); // Call the function to find length
    printf("Length of the string is: %d\n", length); // Print the length of the string
    return 0;
}
int strLength(char str[])
{
    int i = 0;
    while (str[i] != '\0') // Loop until the null character is found
    {
        i++; // Increment the index
    }
    return i; // Return the length of the string
}