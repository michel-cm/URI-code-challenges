#include <stdio.h>
 
int main() {
 
    int i;
    int x,y;
    int soma;   
    
		soma = 0; 	
    	scanf("%d%d", &x, &y);
    	
    		if (x < y){
    			for(x = x+1; x < y ; x++){
    				if( x % 2 != 0){
    				soma = soma + x;    			
					} 
				}
					printf("%d\n", soma);
				}else{					
					for(x = x-1; x > y ; x--){
    				if( x % 2 != 0){
    				soma = soma + x ;    					
					}    				
				}
				printf("%d\n", soma);
			}
    
    return 0;
}
