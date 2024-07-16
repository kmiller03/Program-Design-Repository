//Print the largest and smallest values in an array
//Using pointers rather than global variables is useful because when using
//global variables, it becomes hard to reuse programs. Further, when using pointers rather than global variables
//There is less risk of accidentally reusing var names.
#include <stdio.h>
#define N 10
int *minMax(int a[], int size, int *min, int *max);

int main() {
    int bigBoy[N] = {1, 2, 3, 4, 5, 6, 7, 21, 9, 10};
    int largest, smallest;

    int *max = minMax(bigBoy, N, &largest, &smallest);

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    printf("Pointer to largest value: %d\n", *max);

    return 0;
}

int *minMax(int a[], int size, int *min, int *max) {
    int i;
    int maxIndex;
    *max = *min = a[0];
    for (i = 1; i < size; i++) {
        if (a[i] > *max) {
            *max = a[i];
            maxIndex = i;
        }
        else if (a[i] < *min) {
            *min = a[i];
        }
    }

    return &a[maxIndex];
}