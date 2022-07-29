#include <stdio.h>
 
int main() {
 
    int n;
    int i,x;    
    int somando = 0;
    int temp2 = 0;
        
    scanf("%d", &n);
    int temp = n;
    
    for(i = 0; i < n ; i++){
    	n = temp;
    	printf("");    	
    	for(x = 0; x < n*4 ;x++ ){			
			if(somando <= temp2 + 2){
			somando++; 
			printf("%d ",somando);	
			}else {
			 printf("PUM\n");
				temp2 = temp2 + 4;	
			}
													
    			if(x == 3) {
    				x = temp*4;
    				somando++;
				}   			
    			
		}   	
    }	
	
 
    return 0;
}
