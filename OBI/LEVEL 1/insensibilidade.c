#include <stdio.h>

int main(){
    int n, i, x1, y1, x2, y2, resul = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf(" %i%i%i%i", &x1, &y1, &x2, &y2);
        resul += (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    }
    printf("%i", resul);
    return 0;
}