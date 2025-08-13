#include<stdio.h>
int main()
{
    char ch='a';
    char str[20]="I Love C Programming";
    printf("Case 1 value of ch is: %c\n", ch);
    printf("Case 2 value of ch is: %10c\n", ch);
    printf("Case 3 value of str is: %s\n", str);
    printf("Case 4 value of str is: %18s\n", str);
    printf("Case 5 value of str is: %-15.8s\n", str);
    return 0;
}