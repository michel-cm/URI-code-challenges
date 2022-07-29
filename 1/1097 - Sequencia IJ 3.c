#include <stdio.h>
 
int main() {
 
    int i = 1;
    int j = 7;
    int temp = j;
    
   
    
    for (i; j >=temp -2; i = i++){
    	printf("I=%d J=%d\n", i,j);
    	j = j - 1;  
		if(j < temp-2){
			temp = temp + 2;
			j = temp;			
			i = i + 2;
		}
		if(i > 9)
		return 0;  	
	}
 
    return 0;
}
