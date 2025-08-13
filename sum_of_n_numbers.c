#include<stdio.h>
#include<math.h>
int main ()
{
    int n, sum = 0, i;
    printf("Enetr a positive number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
    {
        sum = sum + i; // Calculate the sum of first n natural numbers
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}