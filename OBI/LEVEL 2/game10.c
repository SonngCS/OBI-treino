#include <stdio.h>

int main(void){
    int n, d, a, resultado;
    scanf("%d %d %d", &n, &d, &a);

    if(a > d){
        resultado = d + (n - a);
    }else{
        resultado = d - a;
    }
    printf("%d", resultado);
    return 0;
}