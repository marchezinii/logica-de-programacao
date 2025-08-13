#include <stdio.h>

int main() {
    int dias, anos, meses, dias_finais;
    
    scanf("%d", &dias);
    
    anos = dias / 365;
    dias = dias % 365;
    meses = dias / 30;  
    dias_finais = dias % 30; 
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias_finais);
    
    return 0;
}