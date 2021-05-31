#include <stdio.h>

int main (void){
    int i, n, x, y, cont;
    int matriz[501][501] = {{0}};
    cont = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        if(matriz[x][y] == 0){
            matriz[x][y] = 1;
        }else{
            cont = 1;
        }
    }
    if(cont == 1){
        printf("1\n");
    }else{
        printf("0\n");
    }
    return 0;
}