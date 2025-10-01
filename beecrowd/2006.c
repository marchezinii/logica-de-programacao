#include <stdio.h>
 
int main() {
 
    int cha;
    int chutes[5];
    int certo = 0;
    
    scanf("%d", &cha);
    
    for (int i = 0; i<5; i++){
        scanf("%d", &chutes[i]);
    }
    for (int i = 0; i<5; i++){
        if(chutes[i] == cha){
            certo++;
        }
    }
    printf("%d\n", certo);
    
    return 0;
}