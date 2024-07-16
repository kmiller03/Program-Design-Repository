#include <stdio.h>
#define N 10

void find_two_largest(int arr[], int n, int *largest, int *second_largest);

int main() {
    int max, second_max;
    int arr[N] = {21,33,3,4,5,6,7,8,9,10};

    find_two_largest(arr, N, &max, &second_max);

    printf("the largest value is: %d and the second largest is: %d\n", max, second_max);
    return 0;
}

void find_two_largest(int arr[], int n, int *largest, int *second_largest) {
    if (arr[0] > arr[1]) {
        *largest = arr[0];
        *second_largest = arr[1];
    }
    else {
        *largest = arr[1];
        *second_largest = arr[0];
    }

    for (int i = 1; i < N; i++) {
        if (arr[i] > *largest) {
            *second_largest = *largest;
            *largest = arr[i];
        }
        else if (arr[i] > *second_largest) {
            *second_largest = arr[i];
        }
    }
    
}