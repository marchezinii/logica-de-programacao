#include <stdio.h>
#include <string.h>

int main() {
    int abas, acoes;
    char acao[10];

    scanf("%d %d", &abas, &acoes);

    for (int i = 0; i < acoes; i++) {
        scanf("%s", acao);

        if (strcmp(acao, "fechou") == 0) {
            abas++;
        } else if (strcmp(acao, "clicou") == 0) {
            abas--; 
        }
    }

    printf("%d\n", abas);

    return 0;
}