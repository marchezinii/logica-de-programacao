#include <stdio.h>
 
int main() {
 
    int pressao;
    int atual; 
    
    scanf("%d", &pressao);
    scanf("%d", &atual);
    
    int sbc = pressao - atual;
    printf("%d\n", sbc);
    
    return 0;
}