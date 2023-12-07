#include <stdio.h>

int main (){
    int p, e, s, counter;
    scanf("%d%d", &p, &e);
    
    int f = 1;

    while(1){
        counter = 0;
        s = f;
        
        while(1){
            counter += s;
        
            if(counter >= p) break;
            counter -= e;
            
            if((counter < 1) || (s < 1)) break;
            s -= 10;
        }
        
        if(counter >= p) break;
        f++;
    }
    
    printf("%d\n", f);
}