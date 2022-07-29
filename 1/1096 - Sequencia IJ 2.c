#include <stdio.h>
 
int main() {
 
    int i = 1;
    int j = 7;
    int temp = j;
    
    for (i; j >=5; i = i++){
    	printf("I=%d J=%d\n", i,j);
    	j = j - 1;  
		if(j < 5){
			j = temp;
			i = i + 2;
		}
		if(i > 9)
		return 0;  	
	}
 
    return 0;
}
