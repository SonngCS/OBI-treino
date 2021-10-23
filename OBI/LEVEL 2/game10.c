//Source problem: https://olimpiada.ic.unicamp.br/pratique/p2/2017/f1/game10/

#include <stdio.h>

int main(void){
    int n, d, a, resultado;
    scanf("%d %d %d", &n, &d, &a);

    if(a > d){
        resultado = d + (n - a);
    }else{
        resultado = d - a;
    }
    printf("%d", resultado);
    return 0;
}
