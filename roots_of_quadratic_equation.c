#include<stdio.h>
#include<math.h>
int main ()
{
 int a, b, c;
 float x1, x2, des, real, img;
 printf("Enter coefficients a, b and c: ");
 scanf("%d %d %d", &a, &b, &c);
 des = b*b - 4*a*c;
 if (des == 0)
 {
    printf("Roots are real and equal.\n");
    x1 = -b / (2*a);
    x2 = x1;
    printf("Roots are: %f and %f\n", x1, x2);
 }
 else if(des > 0)
 {
    printf("Roots are real and distinct.\n");
    x1= -b/(2*a) + sqrt(des)/(2*a);
    x2= -b/(2*a) - sqrt(des)/(2*a);
    printf("Roots are: %f and %f\n", x1, x2);
 }
 else
 {
    printf("Roots are imaginary and distint.\n");
    real = -b / (2*a);
    img = sqrt(4*a*c - b*b) / (2*a);
    printf("Root X1 = %f + i%f\n", real, img);
    printf("Root X2 = %f - i%f\n", real, img);
 }
    return 0;
}