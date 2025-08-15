#include<stdio.h>
#include<conio.h>
int fibonacci(int n)
{
    if (n == 0)
    {
         return 0; // Base case
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
         return (fibonacci(n - 1) + fibonacci(n - 2)); // Recursive call
    }
}

int main()
{
    int x, y, i;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &x);
    printf("Fibonacci Series: ");
    for (i = 0; i < x; i++)
    {
        y= fibonacci(i); // Call the recursive function
        printf("%d ", y); // Print the Fibonacci number
    }
    getch();
}