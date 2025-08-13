//Simple if statement ( Code to check positive Number)
#include <stdio.h>
#include <conio.h>
int main ()
{
    int a;
    printf("\n\n\nThis is a simple if statement");
    printf("\nEnter a Number :");
    scanf("%d", &a);
    if (a>0)
    {
        printf("The number is posive");
    }







//If-else statement ( Code to check Even or Odd Number)
    int b;
    printf("\n\n\n\nThis is an if-else statement");
    printf("\nEnter a Non-Zero Number :");
    scanf("%d", &b);
    if (b%2==0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }







//The Nested If-else statement ( Code to find the Largest Number ammong Three Numbers)
    int c,d,e;
    printf("\n\n\n\nThis is a Nested if-else statement");
    printf("\nEnter Three Numbers :");
    scanf("%d%d%d", &c, &d, &e);
    if(c>d)
    {
        if(c>e)
        {
            printf("The largest number is %d", c);
        }
        else
        {
            printf("The largest number is %d", e);
        }
    }
    else
    {
        if(d>e)
        {
            printf("The largest number is %d", d);
        }
        else
        {
            printf("The largest number is %d", e);
        }
    }







//The else-if ladder ( Code that reads point in rectangular coordinate system and prints the quadrant in which the point lies)
    int x, y;
    printf("\n\n\n\nThis is an else-if ladder");

    printf("\nEnter the coordinates of the point (x, y): ");
    scanf("%d%d", &x, &y);

    if (x==0 && y==0)
    {
        printf("The point (%d, %d) lies at the origin.\n", x, y);
    }


    else if (x>0 && y>0)
    {
        printf("The point (%d, %d) lies in Quadrant I.\n", x, y);
    }


    else if (x<0 && y>0)
    {
        printf("The point (%d, %d) lies in Quadrant II.\n", x, y);
    }


    else if (x<0 && y<0)
    {
        printf("The point (%d, %d) lies in Quadrant III.\n", x, y);
    }


    else if(x>0 && y<0)
    {
        printf("The point (%d, %d) lies in Quadrant IV.\n", x, y);
    }


    else if (x==0 && y!=0)
    {
        printf("The point (%d, %d) lies on the y-axis.\n", x, y);
    }


    else if (y==0 && x!=0)
    {
        printf("The point (%d, %d) lies on the x-axis.\n", x, y);
    }


    else
    {
        printf("Invalid input.\n");
    }
    return 0;
    getch(); // Wait for a key press
}