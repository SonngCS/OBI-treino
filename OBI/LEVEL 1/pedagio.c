#include <stdio.h>

int main(void){
    int l, d, k, p, custo;

    scanf("%i %i %i %i", &l, &d, &k, &p);


    custo = (l*k) + ((l/d)*p);
    printf("%i", custo);
    return 0;
}