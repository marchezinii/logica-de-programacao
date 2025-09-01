#include <stdio.h>

int main()
{ 
	int * p;
	int idade = 20;
	p = &idade;
	
	printf("Valor da variavel idade = %d\n", idade);

	* p = 25;
	printf("valor apontado pelo ponteiro = %d\n", *p);
	
	return (0);
}