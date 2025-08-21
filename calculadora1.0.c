#include <stdio.h>
	double soma (double a, double b);
	double subtracao (double a, double b);
	double multiplicacao (double a, double b);
	double divisao (double a, double b);
	int expoente (int a, int b);
	int raiz (int a);
	int mdc(int a, int b);
	int mmc(int a, int b);
	unsigned long long fatorial_duplo(int N);
	unsigned long long fatorial_simples(int N);
	double bhaskara (double a);
	
		int main ()

	{
		int xint;
		int n, N, N1;
		int sinais, sair;
		double x;
		double n1, n2;
		double delta = 0;
		double raiz1, raiz2;
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
		
		if (sinais == 3) {
            printf("Encerrando a calculadora...\n");
            break;
        }
		
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
			case 4:
				printf("Digite um numero:\n");
				scanf("%lf", &n1);
				printf("Digite um segundo numero:\n");
				scanf("%lf", &n2);
					if (n2 == 0) {
					printf("Impossivel dividir por 0!\n");
				}   else {
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
				scanf("%d", &n);
				printf("Digite o expoente:\n");
				scanf("%d", &N);
				xint = expoente(n, N);
					printf("Resultado = %d\n", xint);
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
				scanf("%d", &n);
				xint = raiz(n);
					printf("Resultado = %d\n", xint);
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
				xint = fatorial_simples(n);
					printf("Resultado = %d\n", xint);
			break;
			case 11:
				printf("Digite um numero inteiro:\n");
				scanf("%d", &n);
				printf("Digite o segundo:\n");
				scanf("%d", &N);
				printf("Por fim, o terceiro:\n");
				scanf("%d", &N1);
				delta = expoente(N, 2) - 4 * n * N1;
				if (n == 0 || delta < 0) {
					printf("Impossivel calcular\n");
			} else {
				raiz1 = (((-1)*N)+bhaskara(delta))/(2*n);
				raiz2 = (((-1)*N)-bhaskara(delta))/(2*n);
				printf("X1 = %.5lf\nX2 = %.5lf\n", raiz1, raiz2);
			}break;
		default:
			printf("Opcao invalida! Tente novamente.\n");
		break;
		}
		
		}while (sinais != 3);
		
		return 0;
	}			
	double soma (double a, double b)
	{	 double c = 1;
		c = a + b;
		
		return (c);
	}
	double subtracao (double a, double b)
	{	 double c = 1;
		c = a - b;
		
		return (c);
	}
	double multiplicacao (double a, double b)
	{	 double c = 1;
		c = a * b;
		
		return (c);
	}
	double divisao (double a, double b)
	{	 double c = 0;
		c = a / b;
		
		return (c);
	}
	int expoente (int a, int b)
	{	int c = 1;
		for (int i = 0; i<b; i++){
			c = c * a;}
		return (c);
	}
	int raiz (int a)
	{	double b = 0;
		double c = 0;
		c = a;
		for (int i = 0; i<100; i++)
	   {b = 0.5*(a+c/a);
	   a = b;}
		return (a);
	}
	int mdc(int a, int b) {
		while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
		return (a);
	}
	int mmc(int a, int b) {
	if (a < 0) a = -a;
    if (b < 0) b = -b;

    int maior = (a > b) ? a : b;

    while (1) {
        if (maior % a == 0 && maior % b == 0) {
            return (maior);
        }
        maior++;
    }
}
		unsigned long long fatorial_duplo(int N) {
		if (N <= 0) return (1);

		unsigned long long resultado = 1;
		for (int i = N; i > 0; i -= 2) {
			resultado *= i;
		}
		return (resultado);
	}
	unsigned long long fatorial_simples(int N) {
		if (N < 0) return (0);

    unsigned long long resultado = 1;
		for (int i = 2; i <= N; i++) {
        resultado *= i;
    }
	return (resultado);
}	double bhaskara (double a)
	{	double b = 0;
		double c = 0;
		c = a;
		for (int i = 0; i<100; i++)
	   {b = 0.5*(a+c/a);
	   a = b;}
		return (a);
	}