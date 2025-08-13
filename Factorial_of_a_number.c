#include<stdio.h>
#include<math.h>
int main ()
{
    int n, factorial = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 

    else 
    {
        for (int i = 1; i <= n; i++) 
        {
            factorial = factorial*i; // Calculate factorial
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }
    return 0;
}