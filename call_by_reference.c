#include<stdio.h>
#include<conio.h>
int swapp(int *, int *); // function prototype
int main()
{
    int a =10, b = 20;
    printf("Value of a and b before swapping :\na=%d\nb=%d\n\n", a, b);
    swapp(&a, &b); // function call with addresses
    printf("Value of a and b after swapping: \na=%d\nb=%d", a, b);
    getch();
}

int swapp(int *a, int *b) // function definition
{
    int temp;
    temp = *a; // passed by reference
    *a = *b; // swap values
    *b = temp; // swap values
    return 0; // return type is int, but not used here
}
