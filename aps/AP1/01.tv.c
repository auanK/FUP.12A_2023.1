#include <stdio.h>

int main(){
    float valor, valor_final, valor_parcela;
    int parcelas, juros;
    scanf("%f%d", &valor, &parcelas);

    juros = (parcelas - 1) * 5;

    valor_final = valor + (valor * juros / 100);
    valor_parcela = valor_final / parcelas;

    printf("%.2f\n%.2f\n", valor_parcela, valor_final);
}