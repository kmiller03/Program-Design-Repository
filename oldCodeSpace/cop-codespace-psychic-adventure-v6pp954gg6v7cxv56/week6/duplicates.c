//professor wrote this
#include <stdio.h>

int duplicates(int *a, int n);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[] = {1, 2, 3, 4, 7, 6, 7, 8};
    int truefalse;

    truefalse = duplicates(&a, 8);
    if (truefalse == 1) {
        printf("Normal case has a duplicate");
    }
    else {
        printf("Normal case has no duplicate");
    }

    truefalse = duplicates(&b, 8);
        if (truefalse == 1) {
        printf("Duplicate case has a duplicate");
    }
    else {
        printf("Duplicate case has no duplicate");
    }

    return 0;
}

int duplicates(int *a, int n) {
    int *iterator;
    int *temp = ;
    int duplicate = 0;
    for (iterator = a; iterator < a + n; iterator++) {
        if (iterator == ) //need a nested loop because you need to compare each var with each other var. duh. also since you're running an if statement anyways, just return 1 if it triggers and don't loop anymore. More efficient.
    }

    return duplicate;
}