#include <stdio.h>
 
int main() {
 
    double pi = 3.14159;
    double raio;
    double v;
    
    scanf("%lf", &raio);
    v = (4.0/3) * pi * raio * raio * raio;
    printf("VOLUME = %.3lf \n", v);
 
    return 0;
}
