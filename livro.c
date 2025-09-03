#include <stdio.h>	
	struct Livro
	{
		char Titulo[50];
		char Autor[50];
		double Preco;
	};
	
	int main()
	{
		struct Livro A1;
		
		printf("Informe o titulo do livro: \n");
		scanf("%[^\n]", A1.Titulo);
		getchar();
		printf("Informe o autor: \n");
		scanf("%[^\n]", A1.Autor);
		getchar();
		printf("Informe o preco: \n");
		scanf("%lf", &A1.Preco);
		
		printf("\nLivro: %s\n", A1.Titulo);
		printf("Autor: %s\n", A1.Autor);
		printf("Preco: %.2lf\n", A1.Preco);
		
		return (0);
	}