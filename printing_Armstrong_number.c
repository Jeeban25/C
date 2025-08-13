#include<stdio.h>
#include<math.h>
int main ()
{
    int r, n, x, s;
    printf("The Armstrong number between 1 to 2000 are:\n");
    for (n=1; n<=2000; n++)
    {
        s = 0;
        x = n;
        while (x != 0)
        {
            r = x % 10;
            s = s + pow(r, 3);
            x = x / 10;
        }
        if (s == n)
        {
            printf("%d \n ", n);
        }
    }
    return 0;
}