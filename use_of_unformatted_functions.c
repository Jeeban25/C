#include<stdio.h>
#include<conio.h>
int main ()
{
    char ch, str[100];
    printf("\nEnter a character :");
    ch = getchar();                                        // Using getchar() to read a character

    while(getchar() != '\n'); // Clear input buffer


    printf("\nEntered character is:"); 
    putchar(ch);                                         // Using putchar() to print the character


    printf("\nCase 1 Enter a character :");
    ch = getch();                                        // Using getch() to read a character without echoing it


    printf("\nEntered character is:"); 
    putch(ch);                                           // Using putch() to print the character


    printf("\n Case 2 Enter a character :");
    ch = getche();                                       // Using getche() to read a character and echo it


    printf("\nEntered character is:"); 
    putch(ch);                                           // Using putch() to print the character


    printf("\nCase 3 Enter a string :");
    gets(str);                                           // Using gets() to read a string


    printf("\nEntered string is:"); 
    puts(str);                                          // Using puts() to print the string


    getch();                                            // Wait for a key press
    return 0;                                           // Return success
}