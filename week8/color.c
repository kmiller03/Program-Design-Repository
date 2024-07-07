#include <stdio.h>


struct color {
    int red;
    int green;
    int blue;
};

int main() {
    struct color magenta = {255, 0, 255};
    printf("%d %d %d\n", magenta.red, magenta.green, magenta.blue);

    struct color color2;
    printf("Input R, G, B values (ex) ");

    return 0;
}