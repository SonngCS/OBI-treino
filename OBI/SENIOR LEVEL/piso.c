//Source problem: https://olimpiada.ic.unicamp.br/pratique/p2/2018/f1/piso/

#include <stdio.h>

int main(void){
    int l, c, t1, t2;
    scanf("%i %i", &l, &c);

    t2 = (2*(l-1)) + (2*(c-1));
    t1 = (l*c + (l-1)*(c-1));
    printf("%i\n%i", t1, t2);
    return 0;
}
