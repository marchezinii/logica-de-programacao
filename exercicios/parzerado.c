#include <stdio.h>

	int main ()
	{   // entrada de valores
		int quantos;
		int numeros[10];
		int pares = 0;
		int impares = 0;
		int i;
		
		printf("Quantos numeros voce deseja verificar a paridade?\n");
		scanf("%d", &quantos);
		
		printf("Digite %d numeros inteiros (para sair digite 0)\n", quantos);
			for (i=0; i<quantos; i++) {
				printf("Numero %d: ", i+1);
					scanf("%d", &numeros[i]);
				if (numeros[i] == 0){
					printf("desligando...\n");
						break;}
				if (numeros[i] % 2 == 0){
					pares++;}
				else { 
					impares++;} 
			}
		printf("\nResultados\n");
		printf("Pares: %d\n", pares);
		printf("Impares: %d\n", impares);
		
		return (0);
	}