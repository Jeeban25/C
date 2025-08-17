#include<stdio.h>
#include<conio.h>
#include<string.h> // Include string.h for string functions
int main()
{
    // strcat() function is used to concatenate two strings
    char name1[15] = "Jeeban", name2[15] = "Bohara";
    strcat(name1, name2); // Concatenating name2 to name1
    printf("After concatenation full name is: %s\n", name1); // Print the concatenated string




    // strlen() function is used to find the length of a string
    char name3[15] = "Jeeban Bohara";
    int length;
    length = strlen(name3); // Finding the length of name3
    printf("\n\nLength of the string '%s' is: %d\n", name3, length); // Print the length of the string



    //strcpy() function is used to copy one string to another
    char name4[15];
    strcpy(name4, name3); // Copying name3 to name4
    printf("\n\nAfter copying, name4 is: %s\n", name4); // Print the copied string  




    //strcmp() function is used to compare two strings
    char name5[15] = "Jeeban", name6[15] = "Bohara";
    int result;
    result = strcmp(name5, name6); // Comparing name5 and name6
    if (result == 0)
    {
        printf("\n\nStrings are equal.\n");
    }
    else if (result < 0)
    {
        printf("\n\n'%s' is less than '%s'.\n", name5, name6);
    }
    else
    {
        printf("\n\n'%s' is greater than '%s'.\n", name5, name6);
    }




    // strrev() function is used to reverse a string
    char name7[15] = "Jeeban Bohara";
    strrev(name7); // Reversing name7
    printf("\n\nReversed string is: %s\n", name7); // Print the reversed string




    // strlwr() function is used to convert a string to lowercase
    char name8[15] = "Jeeban Bohara";
    strlwr(name8); // Converting name8 to lowercase
    printf("\n\nName in Lowercase string is: %s\n", name8); // Print the lowercase string




    // strupr() function is used to convert a string to uppercase
    char name9[15] = "Jeeban Bohara";
    strupr(name9); // Converting name9 to uppercase
    printf("\n\nName in Uppercase string is: %s\n", name9); // Print the uppercase string

    return 0;
}