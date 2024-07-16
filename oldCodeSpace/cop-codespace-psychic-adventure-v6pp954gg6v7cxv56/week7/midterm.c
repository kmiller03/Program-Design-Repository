#include <stdio.h>

int main() {
    int v = 0, w = 2;
    while (v <= 2) {
        while (w < 5) {
            if (w + v == 4) {
                break;
            }
            printf("%d\n", w + v);
            w++;
        }
        printf("%d\n", v - w);
        v++;
    }

    return 0;
}