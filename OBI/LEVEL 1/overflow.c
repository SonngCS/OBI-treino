#include <stdio.h>

int main(void){
    int n, p, q, resultado;
    char c;

    scanf("%d %d %c %d", &n, &p, &c, &q);

    if(c == '+'){
        resultado = p+q;
    }else{
        resultado = p*q;
    }

    if(resultado > n){
        printf("OVERFLOW");
    }else{
        printf("OK");
    }
    return 0;
}