//goto Statement Example
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    if(n%2 == 0)
    {
        goto even; // If n is even, jump to the even label
    }
    else
    {
        goto odd; // If n is odd, jump to the odd label
    }
even: printf("The number %d is Even.", n);
return 0;
odd: printf("The number %d is Odd.", n);
return 0;
}