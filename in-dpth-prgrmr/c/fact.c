#include<stdio.h>

int recFact(int n)
{
    if(n==0) return 1;
    return n * recFact(n-1);
}

int main(void)
{
    int fact = recFact(4);
    printf("Fact: %d\n", fact);

    return 0;
}