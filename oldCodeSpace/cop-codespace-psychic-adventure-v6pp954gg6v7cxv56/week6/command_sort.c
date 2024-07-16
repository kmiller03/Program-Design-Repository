//Professor wrote this
#include <stdio.h>
#include <string.h>

#define LEN 20

int main(int argc, char *argv[]) {
    int i;
    char array[argc-1][LEN];

    // copy argument vectors
    for (i = 1; i < argc; i++) {
        strcpy(array[i-1], argv[i]);
    }

    // sorting
    for (i = 0; i < argc - 1; i++) {
        int min = i;
        for (int b = i + 1; b < argc-1; b++) {
            if (strcasecmp(array[min], array[b]) > 0) {
                min = b;
            }
        }
        if (min != i) {
            // swap the strings
            char temp[LEN + 1];
            strcpy(temp, array[min]);
            strcpy(array[min], array[i]);
            strcpy(array[i], temp);
        }
    }

    for (i = 0; i < argc - 1; i++) {
        printf("%s\n", array[i]);
    }
    return 0;
}