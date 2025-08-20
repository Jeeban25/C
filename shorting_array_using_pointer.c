#include <stdio.h>

int main()
{
    int a[10], *p, i, j, temp;
    p = a;   // pointer points to array

    printf("Enter 10 elements: ");
    for (i = 0; i < 10; i++)
        scanf("%d", p + i);  // input using pointer

    // Sorting in ascending order
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Sorted elements: ");
    for (i = 0; i < 10; i++)
        printf("%d ", *(p + i));  // print each element

    return 0;
}
