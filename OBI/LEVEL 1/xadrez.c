//source problem: https://olimpiada.ic.unicamp.br/pratique/p1/2018/f1/xadrez/

#include <stdio.h>

int main(void){
    int l, c;
    scanf("%d %d", &l, &c);

// if(((l % 2) != 0 && (c % 2) != 0) || ((l % 2 == 0) && (c % 2 == 0))){
    if(l % 2 == c % 2){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
