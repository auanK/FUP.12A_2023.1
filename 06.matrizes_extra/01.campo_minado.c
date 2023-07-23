#include <stdio.h>

int count_mines(char board[][100], int x, int y, int rows, int columns) {
    int mines_neighbors = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (x + i >= 0 && x + i < rows && y + j >= 0 && y + j < columns && board[x + i][y + j] == '*') {
                mines_neighbors++;
            }
        }
    }
    return mines_neighbors;
}

int main() {
    int rows, columns;
    scanf("%d%d", &rows, &columns);
    char board[100][100];
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++) scanf(" %c", &board[i][j]);
    }
            
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (board[i][j] != '*') {
                int mines_neighbors = count_mines(board, i, j, rows, columns);
                if (mines_neighbors > 0) board[i][j] = mines_neighbors + '0';
            }
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) printf("%c", board[i][j]);
        printf("\n");
    }
}