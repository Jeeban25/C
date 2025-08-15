#include<stdio.h>
#include<conio.h>
int factorial(int n); // function prototype
int main()
{
    int n, f;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    f = factorial(n); // function call
    printf("Factorial of %d is %d", n, f);
    getch();
}

int factorial(int k) // function definition
{
    if (k == 0 || k ==1) // base case
    {
        return (1); // factorial of 0 or 1 is 1
    }
    else
    {
        return (k * factorial(k - 1)); // recursive call
    }
}