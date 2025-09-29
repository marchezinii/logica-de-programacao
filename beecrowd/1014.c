#include <stdio.h>
 
int main() {
 
    int km;
    float l;
    double kml;
    
    scanf("%d%f%", &km, &l);
    
    kml = km/l;
    printf("%.3lf km/l\n", kml);
    
    return 0;
}