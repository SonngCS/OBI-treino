//Source problem: https://olimpiada.ic.unicamp.br/pratique/p2/2009/f1/fugitivo/

#include <stdio.h>

int main(){
    int n, i, num, resultado = 0;
    char pos;
    long long x = 0, y = 0, m;

    scanf("%d%lld", &n, &m);
    for (i = 0; i < n; i++){
        scanf(" %c%d", &pos, &num);
        switch (pos){
            case 'N': y += num; break; 
            case 'S': y -= num; break;
            case 'L': x += num; break;
            case 'O': x -= num; break;
        }
/*       if(pos == 'N'){
           y += num;
       }else{
           if(pos == 'S'){
               y -= num;
           }else{
               if(pos == 'L'){
                   x += num;
               }else{
                   if(pos == 'O'){
                    x -= num;
                   }
               }
           }
       }
       */
        if(x*x + y*y > m*m){
            resultado = 1;
        }
    }
    printf("%d", resultado);
    return 0;
}
