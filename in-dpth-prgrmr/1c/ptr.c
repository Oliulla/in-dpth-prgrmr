#include<stdio.h>
#include<stdlib.h>

void dynamic_m_alloc(void)
{
    int *arr = (int *)malloc(5 * sizeof(int)); 
    arr[0] = 42;
    printf("First Element: %d\n", arr[0]);
    free(arr); 
}

void ptrArthmtc(void)
{
   int arr[] = {10, 20, 40};
   int *ptr = arr; // Points to first element

   printf("%d\n", *(ptr+1)); // 20
}

int main(void)
{
    // int num = 10;
    // int *ptr = &num;

    // printf("Value of ptr: %d\nAddress of ptr: %p\n", *ptr, ptr);
    // dynamic_m_alloc();
    ptrArthmtc();

    return 0;
}