#include <stdio.h>

int main (void){
    int m, n, i, j, cont;
    cont = 0;
    scanf("%d %d", &m, &n);
    char mapa[m][n+1];

    for(i = 0; i < m; i++){
        scanf("%s", mapa[i]);
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(mapa[i][j] == '#'){
                if((i == 0 || i == m-1 || j == 0 || j == n-1) && mapa[i][j] == '#'){
                cont++;
                }else{
                    if(mapa[i-1][j] == '.' || mapa[i+1][j] == '.' || mapa[i][j-1] == '.' || mapa[i][j+1] == '.'){
                        cont++;
                    }
                }
            }
        }
    }
    printf("%d\n", cont);
    
    return 0;

}