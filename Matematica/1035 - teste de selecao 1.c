#include <stdio.h>
 
int main() {
 
    int a,b,c,d;
    int somacd,somaab;   
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    somacd = c + d;
    somaab = a + b;
    
    if(b > c && d > a && somacd > somaab && (a%2 == 0) && c > 0 && d > 0)
     printf("Valores aceitos");
     else
     printf("Valores nao aceitos");
 
    return 0;
}
