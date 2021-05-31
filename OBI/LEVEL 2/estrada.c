#include <stdio.h>
#include <string.h>

int main(void){
    int c, cont, a;
    cont = 0;
    scanf("%d", &c);
    char pista[c+1];
    scanf("%s", pista);

    for(int i = 0, a = strlen(pista); i < a; i++){
        switch(pista[i]){
            case 'P': case 'C': cont += 2; break;
            case 'A': cont += 1; break;
        }
    }

    printf("%d\n", cont);

    return 0;
}