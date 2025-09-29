#include <stdio.h>

void tamanho(int numeros[], int *quantidade);
void bubbleSort(int numeros[], int quantidade);
void imprimirVetor(int numeros[], int quantidade);

int main()
{
    int numeros[100]; 
    int quantidade = 0;
    
    tamanho(numeros, &quantidade);
    
    bubbleSort(numeros, quantidade);
    
    printf("Os numeros informados ordenados sao:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

void tamanho(int numeros[], int *quantidade)
{
    printf("Informe a quantidade de numeros: ");
    scanf("%d", quantidade);

    if (*quantidade <= 0 || *quantidade > 100) {
        printf("Quantidade invalida! Por favor, informe um valor entre 1 e 100.\n");
        return;
    }

    for (int i = 0; i < *quantidade; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

void bubbleSort(int numeros[], int quantidade)
{
    for (int i = 0; i < quantidade - 1; i++) { 
        for (int j = 0; j < quantidade - 1 - i; j++) {  
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

void imprimirVetor(int numeros[], int quantidade)
{
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}