#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float des,x1,x2,real,img;
    printf("Entyer the value of a,b&c:");
    scanf("%d%d%d",&a,&b,&c);
    des=b*b-4*a*c;
    if(des==0)
    {
    printf("Roots are real and equal.");
    x1=-b/2*a;
    printf("\n root x1 = x2 = %f",x1);
    }
    else if(des>0)
    {
        printf("\nRoots are real and distinct.");
        x1=-b/2*a-sqrt(des)/2*a;
        x2=-b/2*a+sqrt(des)/2*a;
        printf("\n Roots x1=%f & x2=%f",x1,x2);
    }
    else
    {
        printf("|n Roots are imaginary and distinct.");
        real=-b/2*a;
        img=sqrt(4*a*c-b*b)/2*a;
        printf("\n Root x1=%f+j%f",real,img);
        printf("\n Root x2= %f-j%f",real,img);
    }
    return 0;
}