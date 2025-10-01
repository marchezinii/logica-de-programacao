#include <stdio.h>
 
int main() {
    
    int pira, tata, boto, guari, lara;
    
    scanf("%d%d%d%d%d", &pira, &tata, &boto, &guari, &lara);
    
    int total = (pira*300)+(tata*1500)+(boto*600)+(guari*1000)+(lara*150)+225;
    
    printf("%d\n", total);
 
    return 0;
}