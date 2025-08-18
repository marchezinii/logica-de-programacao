#include <stdio.h>

int main ()
{
	double num = 0;
	double x = 0;
	double novo_x = 0;
	
	printf("Informe o numero positivo que voce deseja calcular a raiz quadrada:\n");
		scanf("%lf", &num);
		
		x = num;
		for (int i = 0; i<10; i++)
		{ novo_x = 0.5*(x+num/x);
			x = novo_x;
			printf ("O valor da raiz quadrada de %.0lf eh : %lf\n", num, x);
		}
		
		return (0);
}
	
	