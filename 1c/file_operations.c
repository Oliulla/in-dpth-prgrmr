#include <stdio.h>

void writeFile(void)
{
    FILE *file = fopen("run.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fprintf(file, "gcc program.c -o program && ./program\n");
    fclose(file);
}

void readFile(void)
{
    FILE *file = fopen("run.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    char buffer[50];
    fgets(buffer, 50, file);
    printf("%s", buffer);
    fclose(file);
}
