#include<stdio.h>
#include<stdio.h>
int main()
{
    int i, a[10], sum = 0;
    float average;
    printf("Enter 10 numbers:");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]); // Read each number into the array
        sum += a[i]; // Add the number to the sum
    }
    average = sum / 10; // Calculate the average
    printf("The average of the entered numbers is: %f\n", average); // Print the average
    return 0;
}