#include<stdio.h>
#include <conio.h>
void sortArray(int arr[], int); // Function prototype for sorting
void displayArray(int arr[], int); // Function prototype for displaying
int main()
{
    int b[10], i, n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    printf("Enter %d elements in array: ", n);
    for(i= 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    sortArray(b, n); // Call to sort the array
    displayArray(b, n); // Call to display the sorted array
    getch();
    return 0;
}

void sortArray(int arr[], int n)
{
    int i, j, temp;
    // Bubble sort algorithm
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void displayArray(int arr[], int n)
{
    int i;
    printf("Sorted array in ascending order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}