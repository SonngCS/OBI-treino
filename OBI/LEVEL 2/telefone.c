#include <stdio.h>
#include <string.h>

int main(void){
    int i, a;
    char telefone[16];
    scanf("%s", telefone);

    for(i = 0, a = strlen(telefone); i < a; i++){
        switch (telefone[i]){
            case 'A': case 'B': case 'C': telefone[i] = '2'; break;
            case 'D': case 'E': case 'F': telefone[i] = '3'; break;
            case 'G': case 'H': case 'I': telefone[i] = '4'; break;
            case 'J': case 'K': case 'L': telefone[i] = '5'; break;
            case 'M': case 'N': case 'O': telefone[i] = '6'; break;
            case 'P': case 'Q': case 'R': case 'S': telefone[i] = '7'; break;
            case 'T': case 'U': case 'V': telefone[i] = '8'; break;
            case 'W': case 'X': case 'Y': case 'Z': telefone[i] = '9'; break;
        }
    }
    printf("%s\n", telefone);
    return 0;
}