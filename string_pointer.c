#include<stdio.h>
#include<conio.h>
int main()
{
    char *str="I am an Engineering Student"; //char arr[30]="I am an Engineering Student";
    /* allocates 30 bytes of memory among which 26 bytes is used & rest is wasted, thus using pointer is memory efficient than array */
    printf("%s",str);
    return 0;
}