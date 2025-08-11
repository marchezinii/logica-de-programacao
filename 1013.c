#include <stdio.h>
 
int main() {
 
  int A, B, C, maiorab, maior;
  
  scanf("%d%d%d", &A, &B, &C);

    maiorab = (A+B+abs(A-B))/2;
        maior = (maiorab+C+abs(maiorab-C))/2;
 
     printf("%d eh o maior\n", maior);
     
    return 0;
}