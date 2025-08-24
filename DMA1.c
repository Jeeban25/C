#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter size of array :\n");
    scanf("%d",&n);
    /*int a[n]; invalid; array cannot have variable size and cannot be initialized during runtime*/
    int *A = (int*) malloc(n*sizeof(int)); //dynamically allocated array
    for (int i=0; i<n; i++)
    {
        A[i]=i+1;
    } //free(A);
    for (int i=0; i<n; i++)
    {
        printf("%d",A[i]); //*(A+i)
    }
    free(A);
    return 0;
}
