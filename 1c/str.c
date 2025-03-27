#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "Hello";
    char s2[] = " World";

    strcat(s1, s2);
    int len = strlen(s1);
    printf("Combined: %s, Length: %d\n", s1, len);

    return 0;
}