#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[8], Largest;
    printf("Enter 8 numbers:");
    for(i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]); // Read each number into the array
    }
    Largest = a[0]; // Assume the first element is the largest
    for(i = 1; i < 8; i++)
    {
        if(a[i] > Largest) // Compare each element with the current largest
        {
            Largest = a[i]; // Update largest if a larger element is found
        }
    }
    printf("The largest number is: %d", Largest); // Print the largest number
    return 0; 
}