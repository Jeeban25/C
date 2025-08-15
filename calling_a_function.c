#include<stdio.h>
#include<conio.h>
float add (int p, int q)
{
    float s;
    s= p+q;
    return s;
}

int main ()
{
    int a, b;
    float sum;
    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);
    sum = add(a,b); // function call
    printf("sum = %f",sum);
    getch();
}