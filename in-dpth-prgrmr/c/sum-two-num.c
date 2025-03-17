#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}


int main(void) 
{

    int sum = add(10, 20);
    printf("Sum: %d\n", sum);
    
    return 0;
}