#include <stdio.h>

int main()
{
    int arr[3][4] = 
    {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {12, 13, 14, 15}
    };

    int (*x)[4];   // x is a pointer to an array of 4 integers
    x = arr;       // arr decays into pointer to its 1st row

    printf("1st row address is = %u and *x = %u\n", x, *x);
    printf("2nd row address is: %u \n", (x+1));
    printf("3rd row address is: %u\n", (x+2));

    // Printing using pointer arithmetic
    printf("\nAddress of arr[1][0] = %u and its value = %d\n", 
           (*(x+1)+0), *(*(x+1)+0));

    printf("Address of arr[1][3] = %u and its value = %d\n", 
           (*(x+1)+3), *(*(x+1)+3));

    return 0;
}
