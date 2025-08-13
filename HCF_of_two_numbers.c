#include<stdio.h>
#include<math.h>
int main ()
{
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (hcf = (a < b) ? a : b; hcf > 0; hcf--) // Start with the smaller number
    {
        if (a % hcf == 0 && b % hcf == 0) 
        {
            break; // Found the HCF
        }
    }
    printf("HCF = %d\n", hcf);
    return 0;
}