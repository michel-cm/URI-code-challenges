#include <stdio.h>
 
int main() {
 
    int n[4];
    int i;
    int par = 0;
    int impar = 0;
    int pos = 0;
    int negat = 0;
    
    scanf("%d", &n[0]);
    scanf("%d", &n[1]);
    scanf("%d", &n[2]);
    scanf("%d", &n[3]);
    scanf("%d", &n[4]);
    
    for(i = 0 ; i < 5; i++){
    	if(n[i]%2 == 0)
    	par++;
    		if(n[i]%2 != 0)
    	impar++;
    	if(n[i] < 0)
    	negat++;
    	if(n[i] > 0)
    	pos++;
    	
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", negat);  
 
    return 0;
}
