#include<stdio.h>
#include<conio.h>
int main()
{
    //Using Array
    char arr1[4][8]={"Hari", "Ram", "Binod", "Bikash"};
    for(int i=0; i<4; i++)
    {
        printf("%s\n",arr1[i]); // consumes 32 slots
    }

    printf("\n\n");

    //Using array of Pointer
    char *arr2[4]={"Hari", "Ram", "Binod", "Bikash"};
    for(int i=0; i<4; i++)
    {
        printf("%s\n",*(arr2+i)); // arr[i]
    }
    return 0;
}