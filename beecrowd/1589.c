#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int R1, R2;
        scanf("%d %d", &R1, &R2);
        printf("%d\n", R1 + R2);
    }
    
    return 0;
}