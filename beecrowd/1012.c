#include <stdio.h>
#define pi 3.14159
 
int main() {
 
   double A, B, C, AT, AC, ATR, AQ, AR;
   
   scanf("%lf%lf%lf", &A, &B, &C);
    
    AT = (A*C)/2;
    AC = pi*(C*C);
    ATR = (A+B)*C/2;
    AQ = B*B;
    AR = A*B;
    
    printf("TRIANGULO: %.3lf\n", AT);
    printf("CIRCULO: %.3lf\n", AC);
    printf("TRAPEZIO: %.3lf\n", ATR);
    printf("QUADRADO: %.3lf\n", AQ);
    printf("RETANGULO: %.3lf\n", AR);
    
    return 0;
}