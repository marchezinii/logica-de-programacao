#include <stdio.h>
 
int main() {
 
    int num;
    
    scanf("%d", &num);
    
    for (int i = 1; i<=num;i++){
    
    int qua = i*i;
    
    int tri = i*i*i;
    
    printf("%d %d %d\n", i, qua, tri);
}
    return 0;
}