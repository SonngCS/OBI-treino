//Source problem: https://olimpiada.ic.unicamp.br/pratique/p2/2010/f2/telescopio/

#include <stdio.h>

int main(){
    int i, a, n, f, counter = 0;
    scanf("%d%d", &a, &n);

    for(i = 0; i < n; i++){
        scanf("%d", &f);
        if(f*a >= 40000000){
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}
