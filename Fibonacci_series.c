#include<stdio.h>
#include<math.h>
int main ()
{
    int i, n, a=-1, b=1, c;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    for (i =1; i <= n; i++)
    {
        c = a + b; // Calculate the next term
        printf("%d ", c);
        a = b; // Update a to the previous term
        b = c; // Update b to the current term
    }
    return 0;
}