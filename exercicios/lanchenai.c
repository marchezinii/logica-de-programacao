#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int produto, quantidade, sair = 1, metodoPagamento, novoMetodo;
    float total = 0.0, valorPago, troco;

    printf("Ola, seja bem-vindo a panificadora do SENAI\n");
    printf("Qual seu nome?\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; 

    printf("Com fome %s? Aqui esta nosso cardapio:\n", nome);
    printf("--------------------------------------\n");
    printf("| 1 - Misto quente     R$ 5,00       |\n");
    printf("| 2 - X bacon          R$ 20,00      |\n");
    printf("| 3 - X salada         R$ 18,00      |\n");
    printf("| 4 - Refrigerante     R$ 5,00       |\n");
    printf("| 5 - Suco de abacaxi  R$ 8,00       |\n");
    printf("| 6 - Cafe             R$ 4,00       |\n");
    printf("--------------------------------------\n");

    do {
        printf("Digite o codigo desejado (1 a 6): ");
        scanf("%d", &produto);

        printf("Quantos voce deseja? ");
        scanf("%d", &quantidade);

        switch (produto) {
            case 1:
                total += 5.0 * quantidade;
                printf("Voce adicionou %d Misto quente ao pedido.\n", quantidade);
                break;
            case 2:
                total += 20.0 * quantidade;
                printf("Voce adicionou %d X bacon ao pedido.\n", quantidade);
                break;
            case 3:
                total += 18.0 * quantidade;
                printf("Voce adicionou %d X salada ao pedido.\n", quantidade);
                break;
            case 4:
                total += 5.0 * quantidade;
                printf("Voce adicionou %d Refrigerante ao pedido.\n", quantidade);
                break;
            case 5:
                total += 8.0 * quantidade;
                printf("Voce adicionou %d Suco de abacaxi ao pedido.\n", quantidade);
                break;
            case 6:
                total += 4.0 * quantidade;
                printf("Voce adicionou %d Cafe ao pedido.\n", quantidade);
                break;
            default:
                printf("Produto invalido!\n");
                break;
        }

        printf("Deseja adicionar mais produtos? (1 para sim, 2 para nao): ");
        scanf("%d", &sair);

    } while (sair == 1);

    printf("\nTotal do seu pedido: R$ %.2f\n", total);
	
    while (1) {
        printf("Escolha o metodo de pagamento: (1) Cartao (2) Dinheiro\n");
        scanf("%d", &metodoPagamento);

        switch (metodoPagamento) {
            case 1:
                printf("Digite o valor pago no cartao: R$ ");
                scanf("%f", &valorPago);
                if (valorPago < total) {
                    printf("Saldo insuficiente no cartao.\n");
                    printf("Deseja usar outro metodo de pagamento? (1 para sim, 2 para nao): ");
                    scanf("%d", &novoMetodo);
                    if (novoMetodo == 2) {
                        printf("Compra cancelada. Obrigado!\n");
                        return 0;
                    }
                } else {
                    troco = valorPago - total;
                    printf("Pagamento aprovado! Troco: R$ %.2f\n", troco);
                    return 0;
                }
                break;

            case 2:
                printf("Digite o valor pago em dinheiro: R$ ");
                scanf("%f", &valorPago);
                if (valorPago < total) {
                    printf("Saldo insuficiente.\n");
                    printf("Deseja usar outro metodo de pagamento? (1 para sim, 2 para nao): ");
                    scanf("%d", &novoMetodo);
                    if (novoMetodo == 2) {
                        printf("Compra cancelada. Obrigado!\n");
                        return 0;
                    }
                } else {
                    troco = valorPago - total;
                    printf("Pagamento aprovado! Troco: R$ %.2f\n", troco);
                    return 0;
                }
                break;

            default:
                printf("Metodo de pagamento invalido.\n");
                break;
        }
    }

    printf("Obrigado pela preferencia, %s!\n", nome);

    return 0;
}