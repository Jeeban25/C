#include<stdio.h>
#include<conio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10], r1, r2, c1, c2;
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 == r2 && c1 == c2) // checking the number of rows and columns of both matrices
    {
        printf("Enter elements of first matrix:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Enter elements of second matrix:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        // Adding the two matrices
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        // Displaying the result
        printf("Resultant matrix after addition:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrices cannot be added due to different dimensions.\n");
    }

}