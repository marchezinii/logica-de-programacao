#include <stdio.h>

int main() {
    int p1, c1, p2, c2;
    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

    int ladoEsquerdo = p1 * c1;
    int ladoDireito = p2 * c2;

    if (ladoEsquerdo == ladoDireito) {
        printf("0\n");
    } else if (ladoEsquerdo > ladoDireito) {
        printf("-1\n");
    } else {
        printf("1\n");
    }

    return 0;
}