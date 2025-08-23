#include <stdio.h>
int *larger(int *, int *);
int main()
{
    int a, b;
    int *p;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    p = larger(&a, &b);
    printf("%d is larger.\n", *p);
    return 0;
}

int *larger(int *x, int *y)
{
    if (*x > *y)
    {
        return x; 
    }

    else
    {
        return y;
    }

}
