#include<stdio.h>
#include<conio.h>
int main()
{
    int a, *p; // Pointer declaration
    p = &a; // Pointer initialization
    a = 10;
    printf("%d\n", *p); // Dereferencing pointer to get value of a
    printf("%d\n",*&a); // Dereferencing pointer to get address of a
    printf("%u\n",&a); // Printing address of a
    printf("%u\n",p); // Printing address stored in pointer p
    printf("%u\n",&p); // Dereferencing pointer to get value of a
    return 0;
}