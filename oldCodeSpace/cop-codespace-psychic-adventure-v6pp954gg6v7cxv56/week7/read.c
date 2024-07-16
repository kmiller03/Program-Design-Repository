#include <stdio.h>
#define MAX_LEN 1000

int main() {
    char str[MAX_LEN + 1];

    FILE* pFile;
    pFile = fopen("test.txt", "r");
    if (pFile == NULL) {
        printf("Error oopening file \n");
        return 0;
    }

    while (fgets(str, MAX_LEN, pFile) != NULL) {
        printf("%s", str);
    }
    fclose(pFile);
    return 0;
}