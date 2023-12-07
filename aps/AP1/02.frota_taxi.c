#include <stdio.h>

int main(){
    double a, gc, ga, ra, rgc, rga, ca, cgc, cga;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &gc, &ga, &ra, &rgc, &rga);

    ca = ra / a;
    cgc = rgc / gc;
    cga = rga / ga;

    if(ca > cgc && ca > cga) printf("A\n");
    else if(cga > ca && cga >= cgc) printf("Ga\n");
    else printf("Gc\n");
}