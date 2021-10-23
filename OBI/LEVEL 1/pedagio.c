//Source problem: https://olimpiada.ic.unicamp.br/pratique/p1/2010/f1/pedagio/

#include <stdio.h>

int main(void){
    int l, d, k, p, custo;

    scanf("%i %i %i %i", &l, &d, &k, &p);


    custo = (l*k) + ((l/d)*p);
    printf("%i", custo);
    return 0;
}
