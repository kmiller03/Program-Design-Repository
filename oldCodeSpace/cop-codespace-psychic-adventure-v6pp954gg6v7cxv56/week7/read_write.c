#include <stdio.h>
#define MAX_LEN 1000

int main() {
    char string[MAX_LEN + 1];
    char *pointer;

    FILE* pFile_read;
    FILE* pFile_write;
    pFile_read = fopen("test.txt", "r");
    pFile_write = fopen("test.txt", "w");

    if (pFile_read == NULL || pFile_write == NULL) {
        printf("Error opening file \n");
        return 0;
    }

    while (fgets(string, MAX_LEN, pFile_read) != NULL) {
        for (pointer = string; *pointer != '\0'; pointer++) {
            if (*pointer == '\n') {
                *pointer = ' ';
            }
        }
        fputs(string, pFile_write);
        //printf("%sa", string);
    }
    fclose(pFile_read);
    fclose(pFile_write);

    return 0;
}