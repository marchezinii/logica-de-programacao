#include <stdio.h>

int main() {
    char vendedor[50];
    double salario, vendas, TOTAL;
    
    scanf("%s", vendedor);
    scanf("%lf %lf", &salario, &vendas);
    
    TOTAL = (vendas * 0.15) + salario;
    
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    
    return 0;
}