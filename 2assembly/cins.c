#include <stdio.h>

void myFunction() {
    printf("Hello from C Function!\n");
}

int main() {
    asm ("call myFunction");
    return 0;
}