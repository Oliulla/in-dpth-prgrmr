#include<stdio.h>

void pointerToPointer(void)
{
    int num = 10;
    int *ptr = &num;
    int **dblPtr = &ptr;

    printf("Value of num: %d\n", **dblPtr); 
}

void fnPointer(void (*func)())
{
    func(); // Call the function via pointer
}

// Array of Function Pointers
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }
int devide(int a, int b) { return a / b; }

int main(void)
{
    // pointerToPointer()
    // fnPointer(pointerToPointer);
    int (*operations[3])(int, int) = { add, multiply, devide };
    printf("Addition: %d\n", operations[2](10, 5));

    return 0;
}