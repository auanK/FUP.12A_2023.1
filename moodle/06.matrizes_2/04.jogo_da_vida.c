#include <stdio.h>

int count_neighbors(int row, int col, int rows, int cols, char board[100][100]) {
    int neighbors = 0;

    for (int d_row = -1; d_row <= 1; d_row++) {
        for (int d_col = -1; d_col <= 1; d_col++) {
            if (d_row == 0 && d_col == 0) continue; 

            int new_row = row + d_row;
            int new_col = col + d_col;

            if (new_row >= 0 && new_row < rows && new_col >= 0 && new_col < cols) {
                if (board[new_row][new_col] == '#') neighbors++;
            }
        }
    }

    return neighbors;
}

void next_gen(int rows, int cols, char board[100][100]) {
    char next_gen[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int neighbors = count_neighbors(i, j, rows, cols, board);

            if (board[i][j] == '#') {
                if (neighbors < 2 || neighbors > 3) next_gen[i][j] = '.';
                else next_gen[i][j] = '#';
            } else {
                if (neighbors == 3) next_gen[i][j] = '#';
                else next_gen[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) board[i][j] = next_gen[i][j];
    }
}

int main() {
    int rows, cols;
    char board[100][100];
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) scanf(" %c", &board[i][j]);
    }

    next_gen(rows, cols, board);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) printf("%c", board[i][j]);
        printf("\n");
    }
}
