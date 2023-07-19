#include <stdio.h>
int main(){
    int qtd_casos, qtd_oper, grito;

    scanf("%d", &qtd_casos);
    for(int i = 0; i < qtd_casos; i++){
        scanf("%d%d", &qtd_oper, &grito);

        int oper[qtd_oper];
        for(int j = 0; j < qtd_oper; j++) scanf("%d", &oper[j]);

        for(int j = 0; j < qtd_oper; j++){
            if(oper[j] == grito){
                oper[j - 1] *= -1;
                oper[j + 1] *= -1;
            }
        }

        printf("[");
        for(int j = 0; j < qtd_oper - 1; j++) printf("%d ", oper[j]);
        printf("%d]\n", oper[qtd_oper - 1]);
    }
}