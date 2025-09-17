#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define ARQUIVO "estoque.txt"

// Struct produto
struct Produto {
	int codigo;
	char nome[50];
	int quantidade;
	float preco_unitario;
};

// Cadastro produtos
void cadastrarProduto(struct Produto *produtos, int *cont);

// Listar produtos
void listarProdutos(struct Produto *produtos, int cont);

// Buscar produto
void buscarProduto(struct Produto *produtos, int cont);

// Atualizar a quantidade
void atualizarQuantidade(struct Produto *produtos, int cont);

// Calcular valor do estoque
void calcularValorTotal(struct Produto *produtos, int cont);

// Salvar no arquivo
void salvarDadosNoArquivo(struct Produto *produtos, int cont);

// Carregar dados do arquivo
void carregarDadosDoArquivo(struct Produto *produtos, int *cont);

int main() {
	struct Produto produtos[MAX_PRODUTOS];
	int contador = 0;
	int opcao;

	carregarDadosDoArquivo(produtos, &contador);  // Carrega os dados do arquivo ao iniciar

	do {
		printf("\nMenu:\n");
		printf("1. Cadastrar Produto\n");
		printf("2. Listar Todos os Produtos\n");
		printf("3. Buscar Produto por Codigo\n");
		printf("4. Atualizar Quantidade em Estoque\n");
		printf("5. Calcular Valor Total do Estoque\n");
		printf("6. Salvar Dados no Arquivo\n");
		printf("7. Encerrar Programa\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			cadastrarProduto(produtos, &contador);
			break;
		case 2:
			listarProdutos(produtos, contador);
			break;
		case 3:
			buscarProduto(produtos, contador);
			break;
		case 4:
			atualizarQuantidade(produtos, contador);
			break;
		case 5:
			calcularValorTotal(produtos, contador);
			break;
		case 6:
			salvarDadosNoArquivo(produtos, contador);
			break;
		case 7:
			printf("Saindo do programa...\n");
			salvarDadosNoArquivo(produtos, contador);
			break;
		default:
			printf("Opcao invalida. Tente novamente.\n");
		}
	} while (opcao != 7);

	return 0;
}

void cadastrarProduto(struct Produto *produtos, int *cont) {
	if (*cont >= MAX_PRODUTOS) {
		printf("Capacidade maxima de produtos atingida.\n");
		return;
	}

	printf("Cadastro de Produto #%d\n", *cont + 1);
	printf("Informe o codigo do produto: ");
	scanf("%d", &produtos[*cont].codigo);
	while (getchar() != '\n'); 
	printf("Informe o nome do produto: ");
	fgets(produtos[*cont].nome, sizeof(produtos[*cont].nome), stdin);
	produtos[*cont].nome[strcspn(produtos[*cont].nome, "\n")] = '\0';
	printf("Informe a quantidade do produto: ");
	scanf("%d", &produtos[*cont].quantidade);

	printf("Informe o preco unitario do produto: ");
	scanf("%f", &produtos[*cont].preco_unitario);

	(*cont)++;  // Incrementa o contador de produtos cadastrados
}

void listarProdutos(struct Produto *produtos, int cont) {
	if (cont == 0) {
		printf("Nao ha produtos cadastrados.\n");
		return;
	}

	printf("\nLista de Produtos Cadastrados:\n");
	for (int i = 0; i < cont; i++) {
		printf("Codigo: %d\n", produtos[i].codigo);
		printf("Nome: %s\n", produtos[i].nome);
		printf("Quantidade: %d\n", produtos[i].quantidade);
		printf("Preco Unitario: %.2f\n", produtos[i].preco_unitario);
		printf("---------------------------\n");
	}
}

void buscarProduto(struct Produto *produtos, int cont) {
	int codigo;
	printf("Informe o codigo do produto a ser buscado: ");
	scanf("%d", &codigo);

	for (int i = 0; i < cont; i++) {
		if (produtos[i].codigo == codigo) {
			printf("\nProduto Encontrado!\n");
			printf("Codigo: %d\n", produtos[i].codigo);
			printf("Nome: %s\n", produtos[i].nome);
			printf("Quantidade: %d\n", produtos[i].quantidade);
			printf("Preco Unitario: %.2f\n", produtos[i].preco_unitario);
			return;
		}
	}
	printf("Produto nao encontrado.\n");
}

void atualizarQuantidade(struct Produto *produtos, int cont) {
	int codigo, quantidade;
	char operacao;

	printf("Informe o codigo do produto para atualizacao: ");
	scanf("%d", &codigo);

	for (int i = 0; i < cont; i++) {
		if (produtos[i].codigo == codigo) {
			printf("Produto encontrado: %s\n", produtos[i].nome);
			printf("Deseja (A)dicionar ou (S)ubtrair unidades? ");
		    while(getchar() != '\n');
			scanf("%c", &operacao);

			if (operacao == 'A' || operacao == 'a') {
				printf("Informe a quantidade a ser adicionada: ");
				scanf("%d", &quantidade);
				produtos[i].quantidade += quantidade;
			} else if (operacao == 'S' || operacao == 's') {
				printf("Informe a quantidade a ser subtraida: ");
				scanf("%d", &quantidade);
				if (quantidade <= produtos[i].quantidade) {
					produtos[i].quantidade -= quantidade;
				} else {
					printf("Quantidade insuficiente em estoque.\n");
				}
			} else {
				printf("Operacao invalida.\n");
			}
			return;
		}
	}
	printf("Produto nao encontrado.\n");
}

void calcularValorTotal(struct Produto *produtos, int cont) {
	float total = 0.0;

	for (int i = 0; i < cont; i++) {
		total += produtos[i].quantidade * produtos[i].preco_unitario;
	}

	printf("\nValor total do estoque: %.2f\n", total);
}

void salvarDadosNoArquivo(struct Produto *produtos, int cont) {
	FILE *arq = fopen(ARQUIVO, "w");
	if (arq == NULL) {
		printf("Erro ao abrir o arquivo para gravacao.\n");
		return;
	}

	for (int i = 0; i < cont; i++) {
		fprintf(arq, "%d\n", produtos[i].codigo);
		fprintf(arq, "%s\n", produtos[i].nome);
		fprintf(arq, "%d\n", produtos[i].quantidade);
		fprintf(arq, "%.2f\n", produtos[i].preco_unitario);
	}

	fclose(arq);
	printf("Dados salvos no arquivo.\n");
}

void carregarDadosDoArquivo(struct Produto *produtos, int *cont) {
	FILE *arq = fopen(ARQUIVO, "r");
	if (arq == NULL) {
		printf("Arquivo nao encontrado, comecando com um estoque vazio.\n");
		return;
	}

	while (fscanf(arq, "%d\n", &produtos[*cont].codigo) == 1) {
		fgets(produtos[*cont].nome, sizeof(produtos[*cont].nome), arq);
		produtos[*cont].nome[strcspn(produtos[*cont].nome, "\n")] = '\0';
		fscanf(arq, "%d\n", &produtos[*cont].quantidade);
		fscanf(arq, "%f\n", &produtos[*cont].preco_unitario);
		(*cont)++;
	}

	fclose(arq);
}