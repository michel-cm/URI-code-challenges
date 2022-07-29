#include <stdio.h>
 
int main() {
 
    int n;
    int x;
    int i;
    int in = 0;
    int out = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){   
		
		scanf("%d",&x);
		if(x < 10 || x > 20){
			out++;
		}else{
			in ++;
		}		    	
	}
	
	printf("%d in\n%d out", in , out);
 
    return 0;
}
