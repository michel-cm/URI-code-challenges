#include <stdio.h>
 
int main() {
 
    int n;
    int v;
    int i;
    
    scanf("%d", &n);
    
    for(i=0; i < n ; i++){
    	scanf("%d", &v);
    	if(v % 2 == 0){
    		printf("0\n");
		}else
		printf("1\n");
	}
 
    return 0;
}
