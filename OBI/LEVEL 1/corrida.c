#include <stdio.h>

int main(void){
    int c, n, termino;

    scanf("%i %i", &c, &n);

    termino = c % n;
    printf("%i", termino);
    return 0;

}