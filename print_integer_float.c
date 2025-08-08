#include<stdio.h>
int  main()
{
    int a=12345;
    float b=678.901;
    printf("1.Value of a is: %d\n", a);
    printf("2.a =%10d\n", a);
    printf("3.a =%-10d\n", a);
    printf("4.a=%012d\n", a);
    printf("5.Value of b is :%f\n", b);
    printf("6.b =%10.2f\n", b);
    printf("7.b =%-10.2f\n", b);
    printf("8.b =%012.2f\n", b);
    return 0;
}