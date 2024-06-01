#include <stdio.h>

int main() {
    int foo = 0, j;
    int list[5] = {34, 68, 9, 100, 1};

    for (j = 0; j < 5; j++) {
        if (list[j] > foo)
            foo = list[j];
    }

    printf("%d\n", foo);
    return 0;
}