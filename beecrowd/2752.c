#include <stdio.h>
 
int main() {
 
char i[50] ="AMO FAZER EXERCICIO NO URI";
 printf("<%s>\n", i);
 printf("<%30s>\n", i);
 printf("<%.20s>\n", i);
 printf("<%-20s>\n", i);
 printf("<%-30s>\n", i);
 printf("<%.30s>\n", i);
 printf("<%30.20s>\n", i);
 printf("<%-30.20s>\n", i);
    return 0;
}