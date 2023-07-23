#include <stdio.h>

int calc_largest_sum(int matrix[100][100], int rows, int cols) {
    int largest_sum = 0;
    for (int j = 0; j < cols; j++) {
        int col_sum = 0;
        for (int i = 0; i < rows; i++) col_sum += matrix[i][j];
        if (col_sum > largest_sum) largest_sum = col_sum;
    }

    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) row_sum += matrix[i][j];
        if (row_sum > largest_sum) largest_sum = row_sum;
    }
    return largest_sum;
}

int main() {
    int rows, cols;
    int matrix[100][100];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) scanf("%d", &matrix[i][j]);
    }
    
    printf("%d\n", calc_largest_sum(matrix, rows, cols));
}
