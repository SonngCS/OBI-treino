#include <stdio.h>

int main(void){
    int c, p, f;

    scanf("%d %d %d", &c, &p, &f);

    if(c*f <= p){
        printf("S");
    } else{
        printf("N");
    }
    return 0;
}