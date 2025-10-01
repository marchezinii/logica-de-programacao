#include <stdio.h>
 
int main() {
 
   int limite;
   scanf("%d", &limite);
     
   int numero[limite];

    for (int i = 0; i<limite; i++){
        scanf("%d", &numero[i]);
    }
    
    int saida = 1;
    for (int i = 1; i<limite; i++){
        if (numero[i] != numero[i-1]){
            saida++;
        }
    }
    printf("%d\n", saida);
    
    return 0;
}