#include <stdio.h>

int main() {
    double raio, area;
    double pi = 3.14159;

    // Entrada
    scanf("%lf", &raio);

    // Cálculo da área
    area = pi * (raio * raio);

    // Saída com 4 casas decimais
    printf("A=%.4lf\n", area);

    return 0;
}
