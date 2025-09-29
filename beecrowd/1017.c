#include <stdio.h>
#define kml 12
 
int main() {
    
    double horas, velocidade, distancia, litros;
    
scanf("%lf%lf", &horas, &velocidade);

    distancia = horas * velocidade;
    litros = distancia/12;
    
    printf("%.3lf\n", litros);
    
    return 0;
}