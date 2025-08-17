#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20]= {'J','e','e','b','a','n','B','o','h','a','r','a','\0'};
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]); // Print each character until the null terminator
    }
    return 0;
}