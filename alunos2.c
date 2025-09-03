#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    double nota;
};

int main() {  
	 
	 int alunos = 0;
	 printf("\nQuantos alunos voce tem: \n");
     scanf("%d", &alunos);
    
	struct Aluno turma[alunos];

    // leitura dos dados
    for (int i = 0; i < alunos; i++) {
        printf("\nInforme o nome do aluno: \n");
        scanf(" %[^\n]", turma[i].nome);
        printf("Informe a idade do aluno: \n");
        scanf("%d", &turma[i].idade);
        printf("Informe a nota do aluno: \n");
        scanf("%lf", &turma[i].nota);
    }

    // impressão dos dados
	printf("---------------------------------------\n");
	printf("\nAlunos e notas: \n");
    for (int i = 0; i < alunos; i++) {
        printf("\nAluno: %s\n", turma[i].nome);
        printf("Idade: %d\n", turma[i].idade);
        printf("Nota: %.2f\n", turma[i].nota); 
    }

    return 0;
}
