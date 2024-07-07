#include <stdio.h>
#define MAX_LEN 1000

int main() {
    FILE* pFile;
    
    pFile = fopen("test.txt", "w");
    if (pFile == NULL) {
        printf("Error oopening file \n");
        return 0;
    }
    fputs("Humpty dumpty has a large mane.\n", pFile);
    fputs("Humpty dumpty has great shame.\n", pFile);
    fclose(pFile);
    printf ("File test.txt written\n");
    return 0;
}