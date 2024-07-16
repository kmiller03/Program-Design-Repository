//professor wrote this
#include <stdio.h>

//void min_max3(int a[], int n, int *min, int *max);

void min_max3(int a[], int n, int *min, int *max) {
    int *p;
    *max = *min = a;
    // max = in = &a[0]
    for (p = a + 1; p < a + n; p++) { // equivalent to (p = &a[1]; p < &a[n]; p++)
        if (*p > *max) {
            *max = *p;
        }
        else if (*p < *min) {
            *min = *p;
        }
    }
}