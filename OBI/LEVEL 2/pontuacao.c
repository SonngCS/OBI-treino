#include <stdio.h>

int main(){
    int n, p, p1, p2, counter;
    p1 = p2 = counter = 0;
    scanf("%d%d", &n, &p);
    for(int i = 0; i < n; i++){
        scanf(" %d%d", &p1, &p2);
        if(p1 + p2 >= p){
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}
