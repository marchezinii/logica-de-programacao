#include <stdio.h>

	int main ()
	{   // entrada de valores
		int numeros[10];
		int pares = 0;
		int impares = 0;
		int i = 0;
	 
		printf("Digite 10 numeros inteiros:\n");
			while (i<10){
				printf("Numero %d: ", i+1);
					scanf("%d", &numeros[i]);
				if (numeros[i] % 2 == 0){
					pares++;}
				else { 
					impares++;} 
			i++;
			}
		printf("Resultados\n");
		printf("Pares: %d\n", pares);
		printf("Impares: %d\n", impares);
		
		return (0);
	}