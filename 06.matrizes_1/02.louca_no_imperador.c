#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char arena[n][n];

    int qGlad = 0, qCond = 0;
    int qAuxGlad, qAuxCond, lion;

    for(int i = 0; i < n; i++){
        qAuxGlad = 0;
        qAuxCond = 0;
        lion = 0;
        for(int j = 0; j < n; j++){
            scanf(" %c", &arena[i][j]);
            if(arena[i][j] == 'L') lion = 1;
            if(lion) {
                qAuxGlad = 0;
                qAuxCond = 0;
                continue;
            }else if(arena[i][j] == 'G') qAuxGlad += 2;
            else if(i + j == n - 1 && arena[i][j] == 'C') qAuxCond += 2;
            else if(arena[i][j] == 'C') qAuxCond++;
        }
        qGlad += qAuxGlad;
        qCond += qAuxCond;
    }

    if(qGlad > qCond) printf("Gladiadores\n");
    else if(qCond > qGlad) printf("Condenados a morte\n");
    else printf("Ninguem\n");

}