#include <stdio.h>
 
int main() {
 
    int NUMBER, HOURS;
    float VALUE, SALARY;
    
    scanf("%d%d", &NUMBER, &HOURS);
    scanf("%f", &VALUE);
    
    SALARY = HOURS*VALUE;
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);
    
    return 0;
}