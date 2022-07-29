#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n1,n2,n3,n4,n5;
    int qtd = 0;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    
    if(n1%2 == 0)
    qtd ++;
    if(n2%2 == 0)
    qtd ++;
    if(n3%2 == 0)
    qtd ++;
    if(n4%2 == 0)
    qtd ++;
    if(n5%2 == 0)
    qtd ++;
    
    printf("%d valores pares\n", qtd);
 
    return 0;
}
