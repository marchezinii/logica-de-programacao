#include <stdio.h>

void tamanho(char caracteres[], int *quantidade);
void bubbleSort(char caracteres[], int quantidade);
void imprimirVetor(char caracteres[], int quantidade);

int main()
{
    char caracteres[100]; 
    int quantidade = 0;
    
    tamanho(caracteres, &quantidade);
    
    bubbleSort(caracteres, quantidade);
    
    printf("Os caracteres informados ordenados sao:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("% c ", caracteres[i]);
    }

    return 0;
}

void tamanho(char caracteres[], int *quantidade)
{
    printf("Informe a quantidade de caracteres: ");
    scanf("%d", quantidade);

    if (*quantidade <= 0 || *quantidade > 100) {
        printf("Quantidade invalida! Por favor, informe um valor entre 1 e 100.\n");
        return;
    }

    for (int i = 0; i < *quantidade; i++) {
        printf("Informe o caractere %d: \n", i + 1);
        scanf("% c", &caracteres[i]);
    }
}

void bubbleSort(char caracteres[], int quantidade)
{
    for (int i = 0; i < quantidade - 1; i++) { 
        for (int j = 0; j < quantidade - 1 - i; j++) {  
            if (caracteres[j] > caracteres[j + 1]) {
                char temp = caracteres[j];
                caracteres[j] = caracteres[j + 1];
                caracteres[j + 1] = temp;
            }
        }
    }
}

void imprimirVetor(char caracteres[], int quantidade)
{
    for (int i = 0; i < quantidade; i++) {
        printf("%c ", caracteres[i]);
    }
    printf("\n");
}