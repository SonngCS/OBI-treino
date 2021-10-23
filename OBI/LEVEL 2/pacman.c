//Source problem: https://olimpiada.ic.unicamp.br/pratique/p2/2014/f1/pacman/

#include <stdio.h>

int main (void){

    int n, i, j, k, cont, maior;
    cont = maior = 0;
    scanf("%d", &n);
    j = n;
    char mapa[n+1][n+1];

    for (i = 0; i < n; i++){
        scanf("%s", mapa[i]);
    }

    do{
        if(j % 2 != 0){
            for(i = j; i <= j; i++){
                for(k = 0; k < n; k++){
                    if(mapa[i][k] == 'o'){
                        cont++;
                    }else{
                        if(mapa[i][k] == 'A'){
                            if(cont > maior){
                                maior = cont;
                                cont = 0;
                            }else{
                                cont = 0;
                            }
                        }
                    }
                }
            }
        }else{
            for(i = j; i <= j; i++){
                for(k = n-1; k >= 0; k--){
                    if(mapa[i][k] == 'o'){
                        cont++;
                    }else{
                        if(mapa[i][k] == 'A'){
                            if(cont > maior){
                                maior = cont;
                                cont = 0;
                            }else{
                                cont = 0;
                            }
                        }
                    }
                }
            }
        }
        j -= 1;
    }while (j >= 0);

    printf("%d\n", maior);

    return 0;

}
