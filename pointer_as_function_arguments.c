#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
int main()
{
    int t, m=20, n=30;
    printf("Before swap m=%d\tn=%d",m,n);
    swap(&m,&n);
    printf("\nAfter swap m = %d\tn=%d",m,n);
    return 0;
}

void swap(int *a, int *b) // a=&m, b=&n;
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}