#include <stdio.h>

int main(void){
    int i, cont;
    char partida;

    cont = 0;
    for(i = 0; i < 6; i++){
        scanf(" %c", &partida);
        if(partida == 'V'){
            cont++;
        }
    }

    if(cont >= 5){
        printf("1\n");
    }else{
        if(cont >= 3){
            printf("2\n");
        }else{
            if(cont >= 1){
                printf("3\n");
            }else{
                printf("-1\n");
            }
        }
    }
    return 0;
}