#include <stdio.h> 
#define NUM_CHARS 30 

struct magformer {
    char color[NUM_CHARS + 1];
    char shape[NUM_CHARS + 1];
    int quantity;
};

int main() {
    struct magformer m1 = {"blue", "square", 5};
    printf("%s %s %d\n", m1.color, m1.shape, m1.quantity);

    return 0; 
}