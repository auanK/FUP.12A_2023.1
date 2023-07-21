#include <stdio.h>

int main(){
    int bingo_card[4][4] = {1, 9, 27, 23, 
                            34, 20, 37, 47,
                            30, 87, 55, 69,
                            13, 60, 99, 66};

    int rock, count = 0;

    for(int i = 0; i < 6; i++){
        scanf("%d", &rock);
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                if(bingo_card[j][k] == rock){
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
}