//Break Statement ( Code to demonstrate the use of break statement )
#include <stdio.h>
#include <conio.h>
int main ()
{
    int a;
    printf("\nThis is a break statement\n");
    for (int i = 0; i < 50; i++) 
    {
        if (i == 45) 
        {
            break; // Exit the loop when i is 5
        }
        printf("%d ", i);
    }
    printf("\nLoop exited at i = 45\n");



    // Continue Statement ( Code to demonstrate the use of continue statement )
    printf("\n\n\nThis is a continue statement\n");
    for (int j = 0; j < 50; j++) 
    {
        if (j % 2 == 0)
        {
            continue; // Skip even numbers
        }
        printf("%d ", j);
    }
    printf("\nLoop completed, skipped even numbers.\n");
    getch();
    return 0; 
}