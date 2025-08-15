#include<stdio.h>
#include<conio.h>
int add(int , int); // function prototype
int main()
{
    int a, b, c;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    c = add(a, b); // function call
    printf("Sum = %d", c);
    getch();
}

int add(int p, int q) // function definition
{
    int t;
    t = p + q; // add the two integers
    return (t); // return the sum
}