#include <stdio.h>
#define pi 3.14159
 
int main() {
 
    double VOLUME, raio;
    
    scanf("%lf", &raio);
    
    VOLUME = (4/3.0)*pi*(raio*raio*raio);
        printf("VOLUME = %.3lf\n", VOLUME);
        
    return 0;
}