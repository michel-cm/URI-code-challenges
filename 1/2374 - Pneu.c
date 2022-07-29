#include <stdio.h>
 
int main() {
 
    int x,y,r;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if( x > y){
    	r = x - y;
    	printf("%d\n", r);
	}else if ( x < y){
		r = x - y;
		printf("%d\n", r);
	}else
	printf("0\n");
 
    return 0;
}
