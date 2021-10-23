//Source problem: https://olimpiada.ic.unicamp.br/pratique/p1/2010/f2/marciano/

#include <stdio.h>
#include <math.h>

int main(void){
    int l, a, p, r;
    double hip, diag;
    scanf("%d %d %d %d", &l, &a, &p, &r);

    hip = sqrt(l*l + p*p);
    diag = sqrt(hip*hip + a*a);

    if(2*r >= diag){
        printf("S");
    }else{
        printf("N");
    }
    return 0;
}
