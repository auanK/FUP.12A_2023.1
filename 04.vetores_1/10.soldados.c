#include <stdio.h>

int main(){
    int num_soldados;
    scanf("%d", &num_soldados);

    double soldados[num_soldados], media = 0;

    for(int i = 0; i < num_soldados; i++) {
        scanf("%lf", &soldados[i]);
        media += soldados[i];
    }

    media /= num_soldados;

    printf("%.2lf\n", media);
    for(int i = 0; i < num_soldados - 1; i++) {
        if(soldados[i] < media) printf("P ");
        else if(soldados[i] == media) printf("M ");
        else printf("G ");
    }
        if(soldados[num_soldados - 1] < media) printf("P\n");
        else if(soldados[num_soldados -1] == media) printf("M\n");
        else printf("G\n");
}