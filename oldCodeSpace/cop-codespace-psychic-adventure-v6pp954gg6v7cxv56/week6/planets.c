//professor wrote some of this
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
    char *planets[] = {"Mercury", "Venus", "Earth", 
                      "Mars", "Jupiter", "Saturn",
                      "Uranus", "Neptune", "Pluto"};
    int i, b;
    for (i = 1; i < argc; i++) {
        for (b = 0; b < NUM_PLANETS; b++) { 
            if (strcmp(argv[i], planets[b]) == 0) {
                printf("MATCH! %s\n", planets[b]);
                break;
            }
        }
        if (b == NUM_PLANETS) {
            printf("%s is not a planet.\n", argv[i]);
        }
    }
    return 0;
}