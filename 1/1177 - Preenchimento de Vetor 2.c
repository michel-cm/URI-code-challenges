#include <stdio.h>
#define MAX 1000
int main() {
 
    int t;
    int n[MAX];
    int i,j;
    
    
    scanf("%d", &t);
    
    for (i = 0; i <= MAX -1; i++){
    		
    	for( j= 0 ; j < t ;j++){
    		if( i == MAX ){
    			return 0;
			}
    		n[i] = j;
    		printf("N[%d] = %d\n", i, j);
    		if (j != t-1){
    			i++;
			}
		
		}
    		
    		
    		
    	
	}
    
 
    return 0;
}
