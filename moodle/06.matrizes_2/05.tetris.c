#include <stdio.h>

int can_fall(int L, int C, char display[20][20]) {
    for (int i = L - 1; i >= 0; i--) {
        for (int j = 0; j < C; j++) {
            if (display[i][j] == 'o') {
                if (i == L - 1 || display[i + 1][j] == '#') return 0;
            }
        }
    }
    return 1;
}

void make_piece_fall(int L, int C, char display[20][20]) {
    for (int i = L - 1; i >= 0; i--) {
        for (int j = 0; j < C; j++) {
            if (display[i][j] == 'o') {
                display[i][j] = '.';
                display[i + 1][j] = 'o';
            }
        }
    }
}

int main() {
    int L, C;
    char display[20][20];

    scanf("%d %d", &L, &C);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) scanf(" %c", &display[i][j]);
    }

    if (can_fall(L, C, display)) make_piece_fall(L, C, display);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) printf("%c", display[i][j]);
        printf("\n");
    }
}
