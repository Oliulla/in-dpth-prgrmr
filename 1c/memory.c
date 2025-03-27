#include<stdio.h>

int main(void)
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%s %lu\n", "int: ", sizeof(myInt));      // 4 bytes
    printf("%s %lu\n", "float: ", sizeof(myFloat));    // 4 bytes
    printf("%s %lu\n", "double: ", sizeof(myDouble));   // 8 bytes
    printf("%s %lu\n", "char: ", sizeof(myChar));     // 1 byte
    return 0;
}