#include<stdio.h>
#include<conio.h>
void mult2darray(int [][10], int[][10], int[][10], int, int, int ); // Function prototype for multiplying two 2D arrays
int main()
{
    int A[10][10], B[10][10], C[10][10], r1, r2, c1, c2, i, j, k;
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 == r2) // checking if multiplication is possible or not
    {
        printf("Enter elements of first matrix:");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nEnter elements of second matrix:");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        mult2darray(A, B, C, r1, c1, c2); // function call to multiply two 2D arrays
        printf("Resultant matrix after multiplication:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
    }
    getch();
    return 0;
}

void mult2darray(int A[][10], int B[][10], int C[][10], int r1, int c1, int c2)
{
    int i, j, k, sum;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            sum = 0; // Initialize sum for each element in C
            for (k = 0; k < c1; k++)
            {
                sum += A[i][k] * B[k][j]; // Multiplying and accumulating the sum
            }
            C[i][j] = sum; // Storing the result in C
        }
    }
}