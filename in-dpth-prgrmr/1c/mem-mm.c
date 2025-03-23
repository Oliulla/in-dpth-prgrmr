#include <stdio.h>
#include <stdlib.h>  // Include this header for calloc, realloc, and free

void callocNdRealloc(void)
{
    int *arr = (int *)calloc(5, sizeof(int)); // Zero-initialized
    arr = (int *)realloc(arr, 10 * sizeof(int)); // Resize memory
    free(arr);
}

int main(void)
{
    callocNdRealloc();
    return 0;
}
