#include <stdio.h>

int main() {
    double x1, y1, x2, y2, distancia;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    double deltax = x2 - x1;
    double deltay = y2 - y1;
    double quadrado = deltax * deltax + deltay * deltay;
    
    distancia = quadrado;
    
    for (int i = 0; i < 1000; i++) {
        distancia = 0.5 * (distancia + quadrado / distancia);
    }

    printf("%.4lf\n", distancia);

    return 0;
}