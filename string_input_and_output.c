#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    printf("Enter Your University Name: ");
    scanf("%[^\n]", str); // to read a string with spaces
    // or we can use scanf("%s", str); //str = &str[0];
    // Or we can use gets(str); // to read a string with spaces
    printf("Your University Name is: %s", str);
    // or we can use puts(str); // to print the string
    return 0;
}