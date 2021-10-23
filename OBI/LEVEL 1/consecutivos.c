//source problem: https://olimpiada.ic.unicamp.br/pratique/p1/2012/f1/iguais/

#include <stdio.h>

int main(){
    int n, i, d, x, counter1, counter2;
    x = counter2 = 0;
    counter1 = 1;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &d);
        if(x == d){ 
            counter1++;
        }else{
            if(counter1 > counter2){
                counter2 = counter1;
                counter1 = 1;
            }else{
                counter1 = 1;
            }
        }
        x = d;
    }
    if(counter1 > counter2){
        printf("%d", counter1);
    }else{
        printf("%d", counter2);
    }
    return 0;
}
