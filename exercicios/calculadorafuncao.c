#include <stdio.h>
	double soma (double a, double b);
	double subtracao (double a, double b);
	double multiplicacao (double a, double b);
	double divisao (double a, double b);
	double expoente (double a, double b);
	double raiz (double a);
		int main ()

	{
		double n1, n2;
		double x;
		int sinais, sair;
		
		do {
		
			printf("\nBem vindo a calculadora, digite o numero da operacao desejada\n1-SOMA\n2-SUBTRACAO\n3-MULTIPLICACAO\n4-DIVISAO\n5-POTENCIA\n6-RAIZ\n7-SAIR\n: ");
			scanf("%d", &sinais);
		
		if (sinais == 7) {
            printf("Encerrando a calculadora...\n");
            break;
        }
		if (sinais == 6) {
           printf("Digite o numero\n: ");
			scanf("%lf", &n1);
        }
		else {
			printf("Digite o primeiro numero\n: ");
			scanf("%lf", &n1);
			
		printf("Digite o segundo numero\n: ");
		scanf("%lf", &n2);}
	
		switch (sinais) {
			case 1:
				x = soma(n1, n2);
					printf("Resultado = %lf", x);
			break;
			case 2:
				x = subtracao(n1, n2);
					printf("Resultado = %lf", x);
			break;
			case 3:
				x = multiplicacao(n1, n2);
					printf("Resultado = %lf", x);
			break;
			case 4:
				if (n2 == 0) {
					printf("Impossivel dividir por 0!");
				} else {
						x = divisao(n1, n2);
				printf("Resultado = %lf", x);
				}
			case 5:
				x = expoente(n1, n2);
					printf("Resultado = %lf", x);
			break;
			case 6:
				x = raiz(n1);
					printf("Resultado = %lf", x);
			break;
			break;
		default:
			printf("Opcao invalida! Tente novamente.\n");
		}
		
		}while (sinais != 7);
			
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
	{	 double c = 1;
		c = a / b;
		
		return (c);
	}
	double expoente (double a, double b)
	{	double c = 1;
		for (int i = 0; i<b; i++){
			c = c * a;}
		return (c);
	}
	double raiz (double a)
	{	double b = 0;
		double c = 0;
		c = a;
		for (int i = 0; i<10; i++)
	   {b = 0.5*(a+c/a);
	   a = b;}
		return (a);
	}