//UNFINISHED FROM COPYING HER
#include <stdio.h>
#define ROW 2
#define COL 3

int main() {
    int a[ROW][COL] = {{9, 7, 4}, {20, 15, 3}};

    int row, column, row_total[ROW] = {0}, col_total[COL] = {0};
    printf("row_sum: ");
    
    for (row = 0; row < ROW; row++) {
        for (column = 0; column < COL; column++) {
            row_total[row] += a[row][column];
        }

        printf("%d, ", row_total[row]);
    }

    for (column = 0; column < COL; column++) {
        for (row = 0; row < ROW; row++) {
            col_total[column] += a[row][column];
        }
        printf("%d, ", col_total[column]);
    }


    return 0;
}