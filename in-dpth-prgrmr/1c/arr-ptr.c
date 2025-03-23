#include<stdio.h>

int main(void)
{
    int myNumbers[4] = {25, 50, 75, 100};
    int *ptr = myNumbers;
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for(int i=0; i<len; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}