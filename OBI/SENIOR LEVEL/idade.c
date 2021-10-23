//Source problem: https://olimpiada.ic.unicamp.br/pratique/pj/2019/f1/idade/

#include <stdio.h>

int main(void){
    int m, a, b, c;
    scanf("%i %i %i", &m, &a, &b);
    c = m - (a+b);

    if (a > b && a > c){
    printf("%i",a);
    } else{
            if (b > c){
            printf("%i",b);
            } else{
                printf("%i",c);
                }
        }
    return 0;
}
