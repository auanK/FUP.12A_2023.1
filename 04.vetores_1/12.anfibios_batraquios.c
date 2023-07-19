#include <stdio.h>

int main(){
    int num_anfi, num_batra, count = 0;
    scanf("%d", &num_anfi);

    int anfi[num_anfi];
    for(int i = 0; i < num_anfi; i++) scanf("%d", &anfi[i]);

    scanf("%d", &num_batra);
    int batra[num_batra];    
    for(int i = 0; i < num_batra; i++) scanf("%d", &batra[i]);

    for(int i = 0; i < num_anfi; i++)
        for(int j = 0; j < num_batra; j++)
            if(anfi[i] == batra[j]) {
                count++;
                break;
            }
    
    if(count == num_anfi) printf("sim\n");
    else printf("nao\n");
}
