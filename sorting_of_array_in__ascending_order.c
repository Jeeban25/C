#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, temp, n, a[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Bubble sort
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array in ascending order:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    getch();
    return 0;
}