#include <stdio.h>
#include <string.h>

int main(){
    char hero[31], more_powerfull[31];
    int power, more_power = 0;
    
    int qHF, pHF = 0;
    scanf("%d", &qHF);
    for(int i = 0; i < qHF; i++){
        scanf(" %[^\n]%d", hero, &power);
        if(power > more_power){
            more_power = power;
            strcpy(more_powerfull, hero);
        }
        pHF += power;
    }

    int qCA, pCA = 0;
    scanf("%d", &qCA); 
    for(int i = 0; i < qCA; i++){
        scanf(" %[^\n]%d", hero, &power);
        if(power > more_power){
            more_power = power;
            strcpy(more_powerfull, hero);
        }
        pCA += power;
    }

    if (pHF > pCA) printf("Team Iron Wins\n");
    else if (pCA > pHF) printf("Team Captain Wins\n");  
    else printf("Draw\n");
    printf("%s\n", more_powerfull); 
}