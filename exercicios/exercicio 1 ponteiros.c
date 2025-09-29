#include <stdio.h>

int main()
{ 
	int * ptr;
	int numero = 50;
	ptr = &numero;
	
	printf("Valor da variavel numero = %d\n", numero);
	printf("Endereco da variavel numero = %x\n", &numero);
	printf("Endereco armazenado no ponteiro = %x\n", ptr);
	printf("valor apontado pelo ponteiro = %d\n", *ptr);
	
	return (0);
}