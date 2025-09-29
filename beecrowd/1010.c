#include <stdio.h>

int main() {
    int peca1, n1, peca2, n2;
    double valor1, valor2, VALORAPAGAR;
    
    scanf("%d %d %lf", &peca1, &n1, &valor1);
    scanf("%d %d %lf", &peca2, &n2, &valor2);
    
   VALORAPAGAR = (n1 * valor1) + (n2 * valor2);
    
   printf("VALOR A PAGAR: R$ %.2lf\n", VALORAPAGAR);
    
    return 0;
}