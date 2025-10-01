#include <stdio.h>
 
int main() {
 
    int k;
    scanf("%d", &k);
   
   if (k == 1){
       printf("Top 1\n");
   }
   else if (k == 2 || k==3){
        printf("Top 3\n");
   }
   else if (k == 4 || k==5){
        printf("Top 5\n");
   }
   else if (k >= 6 && k<=10){
        printf("Top 10\n");
   }
    else if (k >= 11 && k<=25){
        printf("Top 25\n");
   }
    else if (k >= 26 && k<=50){
        printf("Top 50\n");
   }
   else 
   {
       printf("Top 100\n");
   }
 
    return 0;
}