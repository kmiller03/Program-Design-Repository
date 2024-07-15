#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int read_line(char str[], int n)
{
    int ch;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int compare_sentences(const void *ptr1, const void *ptr2) {
    return strcmp(*(char **)ptr1, *(char **)ptr2);
}

int main()
{
    char input_buffer[1001];
    int length = 0;
    char *sentences[50];
    int line = 0;

    while (1)
    {
        if (line >= 50)
        {
            break;
        }
        printf("Please type a sentence:\n");
        read_line(input_buffer, 1000);
        length = strlen(input_buffer);
        if (length == 0)
        {
            break;
        }
        sentences[line] = malloc(length + 1);
        if (sentences[line] == NULL)
        {
            printf("malloc failed\n");
            break;
        }
        strcpy(sentences[line], input_buffer);
        line++;
    }

    qsort(sentences, line, sizeof(char *), compare_sentences);
    for (int i = 0; i < line; i++) {
        printf("%s\n", sentences[i]);
        free(sentences[i]);
    }

    return 0;
}