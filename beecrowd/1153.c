#include <stdio.h>
 
int main() {
    
    int N;
    int resultado = 1;
    
    scanf("%d", &N);
    
    for (int i = 2; i <= N; i++) {
        resultado *= i;
    }
    printf("%d\n", resultado);
    return 0;
}