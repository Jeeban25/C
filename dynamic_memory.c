#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    // Step 1: Using malloc
    printf("Enter size of array (malloc): ");
    scanf("%d", &n);

    int *A = (int*) malloc(n * sizeof(int));
    if (A == NULL) {
        printf("Memory allocation failed (malloc)\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        A[i] = i + 1;
    }

    printf("Array using malloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Step 2: Using calloc
    printf("Enter size of array (calloc): ");
    scanf("%d", &n);

    int *B = (int*) calloc(n, sizeof(int));  // initializes to zero
    if (B == NULL) {
        printf("Memory allocation failed (calloc)\n");
        free(A);
        return 1;
    }

    for (i = 0; i < n; i++) {
        B[i] = (i + 1) * 10;
    }

    printf("Array using calloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Step 3: Using realloc (increase size of B)
    int newSize;
    printf("Enter new size for realloc (greater than current): ");
    scanf("%d", &newSize);

    int *C = (int*) realloc(B, newSize * sizeof(int));
    if (C == NULL) {
        printf("Reallocation failed\n");
        free(A);
        free(B);
        return 1;
    }

    // Fill new elements
    for (i = n; i < newSize; i++) {
        C[i] = (i + 1) * 100;
    }

    printf("Array after realloc: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Step 4: Free memory
    free(A);
    free(C);

    return 0;
}
