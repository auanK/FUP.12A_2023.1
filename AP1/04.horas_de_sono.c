#include <stdio.h>

int main(){
    int hd, md, sd, ha, ma, sa;
    scanf("%d%d%d%d%d%d", &hd, &md, &sd, &ha, &ma, &sa);

    int hs = 0, ms = 0, ss = 0;
    if(sa < sd){
        sa += 60;
        md++;
    }
    ss = sa - sd;

    if(ma < md){
        ma += 60;
        hd++;
    }
    ms = ma - md;

    if(ha < hd) ha += 24;
    hs = ha - hd;

    printf("%02d %02d %02d\n", hs, ms, ss);
}