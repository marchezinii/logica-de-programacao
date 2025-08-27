#include <stdio.h>

double soma(double a, double b);
double subtracao(double a, double b);
double multiplicacao(double a, double b);
double divisao(double a, double b);
double expoente(double a, int b);
double raiz(double a);
int mdc(int a, int b);
int mmc(int a, int b);
int fatorial_duplo(int N);
int fatorial_simples(int N);
void bhaskara(int a, int b, int c);

int main()
{
    int xint;
    int n, N, N1;
    int sinais, sair;
    double x;
    double n1, n2;
    double delta = 0;
    
    do {
        printf("-------------------------------------------------------------------------------------\n");
        printf("|Bem vindo a Calculadora 1.0.........................................................|\n");
        printf("|Escolha uma opcao...................................................................|\n");
        printf("-------------------------------------------------------------------------------------|\n");
        printf("| 0 - MDC............................................................................|\n");
        printf("| 1 - MMC............................................................................|\n");
        printf("| 2 - Soma...........................................................................|\n");
        printf("| 3 - Sair ..........................................................................|\n");
        printf("| 4 - Divisao........................................................................|\n");
        printf("| 5 - Subtracao......................................................................|\n");
        printf("| 6 - Potenciacao....................................................................|\n");
        printf("| 7 - Multiplicacao..................................................................|\n");
        printf("| 8 - Raiz Quadrada..................................................................|\n");
        printf("| 9 - Fatorial Duplo (N!!)...........................................................|\n");
        printf("| 10 - Fatorial Simples (N!).........................................................|\n");
        printf("| 11 - Equacao do Segundo Grau.......................................................|\n");
        printf("-------------------------------------------------------------------------------------\n");

        scanf("%d", &sinais);

        switch (sinais) {
            case 0:
                printf("Digite um numero inteiro:\n");
                scanf("%d", &n);
                printf("Digite um segundo numero:\n");
                scanf("%d", &N);
                xint = mdc(n, N);
                printf("Resultado = %d\n", xint);
                break;
            case 1:
                printf("Digite um numero inteiro:\n");
                scanf("%d", &n);
                printf("Digite um segundo numero:\n");
                scanf("%d", &N);
                xint = mmc(n, N);
                printf("Resultado = %d\n", xint);
                break;
            case 2:
                printf("Digite um numero:\n");
                scanf("%lf", &n1);
                printf("Digite um segundo numero:\n");
                scanf("%lf", &n2);
                x = soma(n1, n2);
                printf("Resultado = %.5lf\n", x);
                break;
            case 3:
                printf("Encerrando a calculadora...\n");
                break;
            case 4:
                printf("Digite um numero:\n");
                scanf("%lf", &n1);
                printf("Digite um segundo numero:\n");
                scanf("%lf", &n2);
                if (n2 == 0) {
                    printf("Impossivel dividir por 0!\n");
                } else {
                    x = divisao(n1, n2);
                    printf("Resultado = %.5lf\n", x);
                }
                break;
            case 5:
                printf("Digite um numero:\n");
                scanf("%lf", &n1);
                printf("Digite um segundo numero:\n");
                scanf("%lf", &n2);
                x = subtracao(n1, n2);
                printf("Resultado = %.5lf\n", x);
                break;
            case 6:
                printf("Digite a base:\n");
                scanf("%lf", &n1);
                printf("Digite o expoente:\n");
                scanf("%d", &N);
                x = expoente(n1, N);
                printf("Resultado = %.5lf\n", x);
                break;
            case 7:
                printf("Digite um numero:\n");
                scanf("%lf", &n1);
                printf("Digite um segundo numero:\n");
                scanf("%lf", &n2);
                x = multiplicacao(n1, n2);
                printf("Resultado = %.5lf\n", x);
                break;
            case 8:
                printf("Digite um numero inteiro:\n");
                scanf("%lf", &n1);
                if (n1 < 0) {
                    printf("Impossivel calcular raiz de numero negativo\n");
                } else {
                    x = raiz(n1);
                    printf("Resultado = %.5lf\n", x);
                }
                break;
            case 9:
                printf("Digite um numero inteiro:\n");
                scanf("%d", &n);
                xint = fatorial_duplo(n);
                printf("Resultado = %d\n", xint);
                break;
            case 10:
                printf("Digite um numero inteiro:\n");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Impossivel calcular numero negativo\n");
                } else {
                    xint = fatorial_simples(n);
                    printf("Resultado = %d\n", xint);
                }
                break;
            case 11:
                printf("Digite um numero inteiro:\n");
                scanf("%d", &n);
                printf("Digite o segundo:\n");
                scanf("%d", &N);
                printf("Por fim, o terceiro:\n");
                scanf("%d", &N1);
                bhaskara(n, N, N1);
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (sinais != 3);

    return 0;
}

double soma(double a, double b)
{
    double c = 0.0;
    c = a + b;
    return (c);
}

double subtracao(double a, double b)
{
    double c = 1;
    c = a - b;
    return (c);
}

double multiplicacao(double a, double b)
{
    double c = 1;
    c = a * b;
    return (c);
}

double divisao(double a, double b)
{
    double c = 0;
    c = a / b;
    return (c);
}

double expoente(double a, int b)
{
    double c = 1.0;
    for (int i = 0; i < b; i++) {
        c = c * a;
    }
    return (c);
}

double raiz(double a)
{
    double b = 0;
    double c = 0;
    c = a;
    if (a == 0) return 0.0;
    if (a < 0) {
        printf("Impossível calcular raiz de número negativo.\n");
        return 0;
    }
    for (int i = 0; i < 100; i++) {
        b = 0.5 * (a + c / a);
        a = b;
    }
    return (a);
}

int mdc(int a, int b)
{
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return (a);
}

int mmc(int a, int b)
{
    int maior = 0;

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }

    while (1) {
        if (maior % a == 0 && maior % b == 0) {
            return (maior);
        }
        maior++;
    }
}

int fatorial_duplo(int N)
{
    if (N <= 0) return (1);

    int resultado = 1;
    for (int i = N; i > 0; i -= 2) {
        resultado *= i;
    }
    return (resultado);
}

int fatorial_simples(int N)
{
    int resultado = 1;
    for (int i = 2; i <= N; i++) {
        resultado *= i;
    }
    return (resultado);
}

void bhaskara(int a, int b, int c)
{
    double delta = expoente(b, 2) - 4 * a * c;
    double r1, r2;
    if (delta < 0) {
        printf("Delta negativo. Não existem raízes reais.\n");
    } else {
        r1 = (-b + raiz(delta)) / (2 * a);
        r2 = (-b - raiz(delta)) / (2 * a);
        printf("X1 = %.5lf\nX2 = %.5lf\n", r1, r2);
    }
}