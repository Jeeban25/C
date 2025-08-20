#include <stdio.h>

int main()
{
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    int *p;
    p = a;

    printf("Element\tValue\tAddress\n");
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]\t%d\t%p\n", i, *p, (void*)p);
        p++;
    }
    return 0;
}
