//UNFINISHED FROM COPYING HER. INACCURATE RESULT AFTER LINE 31
#include <stdio.h>
#include <ctype.h>

#define N 26
int main() {
    char ch;
    int letter_counts[N] = {0};
    int isAnagram = 0;

    //User input
    printf("Enter a word: ");
    while ((ch = getchar()) != '\n'){
        if (isalpha(ch)){
            if (isupper(ch))
                ch = tolower(ch);
            letter_counts[ch - 'a']++;
        }
    }

    /*
    // display letter counts
    for (int i = 0; i < N; i++)
        printf("%c", 'a'+i);
    printf("\n");
    for (int i = 0; i < N; i++) 
        printf("%d", letter_counts[i]);
    printf("\n");
    */

    //User input
    printf("Enter a word: ");
    while ((ch = getchar()) != '\n'){
        if (isalpha(ch)){
            if (isupper(ch))
                ch = tolower(ch);
            letter_counts[ch - 'a']--;
        }
    }
    
    for (int i = 0; i < N; i++) {
        if (letter_counts[i] != 0) {
            isAnagram = 0;
        }
    }

    if (isAnagram == 1) {
        printf("Is anagram\n");
    }
    else {
        printf("Not an anagram\n");
    }

    return 0;
}