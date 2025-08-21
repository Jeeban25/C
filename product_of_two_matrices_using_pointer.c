#include<stdio.h>
#include<conio.h>

int main()
{
    int m, n, p, q;
    int i, j, k, sum=0;

    // Ask user for matrix sizes
    printf("Enter rows and columns for first matrix (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns for second matrix (p q): ");
    scanf("%d %d", &p, &q);

    if(n != p)
    {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0;
    }

    // Declare arrays based on user input
    int arr1[m][n], arr2[p][q], arr3[m][q];
    int (*a)[n] = arr1;
    int (*b)[q] = arr2;
    int (*c)[q] = arr3;

    printf("Enter first matrix elements :\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", *(a+i)+j);
        }
    }

    printf("\nEnter second matrix elements :\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d", *(b+i)+j);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
            sum = 0;
            for(k=0; k<n; k++)
            {
                sum += *(*(a+i)+k) * *(*(b+k)+j);
            }
            *(*(c+i)+j) = sum;
        }
    }

    printf("\nThe product of matrix :\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d ", *(*(c+i)+j));
        }
        printf("\n");
    }

    return 0;
}
