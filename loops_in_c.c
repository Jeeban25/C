//For loop
#include <stdio.h>
#include <conio.h>
int main ()
    {
        int i;
        printf("\n\nThis is a for loop");
        for (i=1; i<=10; i++)
        {
            printf("\n Jaya Saraswati Mata \n");
        }



 //While loop
 int n, j;
 printf("\n\n\nThis is a while loop");
 printf("\nEnter a number: ");
    scanf("%d", &n);
    j = 1;
    while (j <= n)
    {
        printf("%d ", j);
        j++;
    }    
    
    

    //Do-while loop
    printf("\n\n\nThis is a do-while loop\n");
    int k=119;
    do
    {
        printf("\t%d", k);
        k--;
    }while (k!=0);

    getch(); // Wait for a key press
    return 0;
    }