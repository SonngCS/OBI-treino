#include <stdio.h>

int main(void){
    int n;
    char resultado;

    scanf("%d", &n);

    if(n == 0){
        resultado = 'E';
    }else{
        if(n <= 35){
            resultado = 'D';
        }else{
            if(n <= 60){
                resultado = 'C';
            }else{
                if(n <= 85){
                    resultado = 'B';
                }else{
                    resultado = 'A';
                }
            }
        }
    }
    printf("%c", resultado);
    return 0;
}