#include <stdio.h>

int main()
{ 
	int * pntr;
	int valor = 10;
	pntr = &valor;
	
	printf("endereco = %x\n", &valor);
	printf("endereco = %x\n", pntr);
	printf("valor = %d\n", *pntr);
	
	return (0);
}