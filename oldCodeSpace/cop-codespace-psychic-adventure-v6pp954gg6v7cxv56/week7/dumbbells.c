#include <stdio.h>

int main() {
    char color[31];
    int weight;
    int count;
    int total_count = 0;

    FILE *fp = fopen("dumbells.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (!feof(fp) && !ferror(fp)) {
        if (fscanf(fp, "%d%s%d", &weight, color, &count) == 3) {
            printf("%d\t%s\t%d\n", weight, color, count);
            total_count += count;
        }

    }
    printf("There are %d dumbbells in total.\n", total_count);


    return 0;
}