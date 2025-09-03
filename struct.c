#include <stdio.h>	
	struct Aluno
	{
		char NOME[50];
		int IDADE;
		float NOTA;
	};
	
	int main()
	{
		struct Aluno A1;
		
		printf("Informe o seu nome\n");
		scanf("%s", A1.NOME);
		printf("Informe sua idade\n");
		scanf("%d", &A1.IDADE);
		printf("Informe sua nota\n");
		scanf("%f", &A1.NOTA);
		
		printf("Nome: %s\n", A1.NOME);
		printf("Idade: %d\n", A1.IDADE);
		prinft("Nota: %f\n", A1.NOTA);
		
		return (0);
	}