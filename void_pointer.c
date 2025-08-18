#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    float b=7.3;
    void *t;
    t = &a; // Assigning address of integer variable to void pointer
    printf("%d", *(int *)t); // Typecasting void pointer to int pointer and dereferencing it
    t = &b; // Assigning address of float variable to void pointer
    printf("\n%f", *(float *)t); // Typecasting void pointer to float pointer and dereferencing it
    return 0;
}