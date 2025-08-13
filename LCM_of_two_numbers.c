#include<stdio.h>
#include<math.h>
int main ()
{
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b; // Start with the larger number
    for (int i = lcm; i <= a * b; i++ )
     {
        if (i % a == 0 && i % b == 0) 
        {
            lcm = i; // Found the LCM
            break;  
        }
    }
    printf("LCM = %d\n", lcm);
     return 0;
}