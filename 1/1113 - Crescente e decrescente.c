#include <stdio.h>
 
int main() {
 
    int x,y;
    
    do{    	
    	scanf("%d %d", &x ,&y);
    	if(x == y)
    	return 0;
    	if(x < y && x != y )
    	printf("Crescente\n");
    	else
    	printf("Decrescente\n");
    
	}while(x != y );
 
    return 0;
}
