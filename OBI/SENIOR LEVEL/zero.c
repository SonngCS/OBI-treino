//Source problem: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/zero/

#include <stdio.h>

int main(void){
    int n, i, somatorio, j;
    scanf("%d", &n);

    int soma[n];

    for (i = 0; i < n; i++){
        scanf("%d", &soma[i]);
    }

    for(i = 0; i < n; i++){
        somatorio += soma[i];
    }

    for(i = 0; i < n; i++){
      if(soma[i] == 0 && soma[i-1] == 0){
          j = i;
          while(soma[j] == 0){
              j--;
          }
        somatorio -= soma[j];
        soma[j] = 0;
      } else{
          if(soma[i] == 0){
              somatorio -= soma[i-1];
              soma[i-1] = 0;
          }
      }
    }

    printf("%d\n", somatorio);

    return 0;
}
