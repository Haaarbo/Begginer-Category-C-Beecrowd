#include <stdio.h>
 
int main() {
    
    double pi = 3.14159, area, raio;
    
    scanf("%lf", &raio);
    area = pi*raio*raio;
    printf("A=%.4lf\n", area);
 
    return 0;
}