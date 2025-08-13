#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter your name in uppercase: ");
    scanf("%[A-Z]",str);
    printf("Your name is: %s",str);
    getch();
}