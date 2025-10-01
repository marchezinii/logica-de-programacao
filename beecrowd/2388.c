#include <stdio.h>

int main() {
    int km = 0;
    int intervalos;
    scanf("%d", &intervalos);
     
    int velocidade[intervalos];
    int tempo[intervalos];

    for (int i = 0; i < intervalos; i++) {
        scanf("%d", &velocidade[i]);
        scanf("%d", &tempo[i]);
    }
    
    for (int i = 0; i < intervalos; i++) {
        km += (tempo[i] * velocidade[i]);
    }

    printf("%d\n", km);
    
    return 0;
}