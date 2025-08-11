#include <stdio.h>
	int main ()
	{
		double n1, n2;
		double soma, subtracao, multiplicacao, divisao;
		int sinais, sair;
		
		do {
		
			printf("\nBem vindo a calculadora, digite o numero da operacao desejada\n1-SOMA\n2-SUBTRACAO\n3-MULTIPLICACAO\n4-DIVISAO\n5-SAIR\n: ");
			scanf("%d", &sinais);
		
		if (sinais == 5) {
            printf("Encerrando a calculadora...\n");
            break;
        }

		printf("Digite o primeiro numero\n: ");
			scanf("%lf", &n1);
			
		printf("Digite o segundo numero\n: ");
			scanf("%lf", &n2);
	
		switch (sinais) {
			case 1:
				soma = n1+n2;
					printf("Resultado = %lf", soma);
			break;
			case 2:
				subtracao = n1-n2;
					printf("Resultado = %lf", subtracao);
			break;
			case 3:
				multiplicacao = n1*n2;
					printf("Resultado = %lf", multiplicacao);
			break;
			case 4:
				if (n2 == 0) {
					printf("Impossivel dividir por 0!");
				} else {
						divisao = n1/n2;
				printf("Resultado = %lf", divisao);
				}	
			break;
		default:
			printf("Opcao invalida! Tente novamente.\n");
		}
		
		}while (sinais != 5);
		
		return 0;
	}			
				