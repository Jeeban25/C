#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter your university name : ");
    scanf("%[^\n]",str);
    printf("Your university full name is :  %s",str);
    return 0;
}