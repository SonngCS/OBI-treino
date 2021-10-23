//Source problem: https://olimpiada.ic.unicamp.br/pratique/p1/2012/f1/corrida/

#include <stdio.h>

int main(void){
    int c, n, termino;

    scanf("%d %d", &c, &n);

    termino = c % n;
    printf("%d\n", termino);
    return 0;

}
