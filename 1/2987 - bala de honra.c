#include <stdio.h>
#include <stdlib.h>
#define MAX 26
 
int main() {
 	
 	int i;
 	char l;
 
    char alfabeto[MAX] = {'A','B','C','D', 'E', 'F','G' ,'H','I','J','K','L','M','N','O','P','Q','R','S' ,'T','U','V','W','X','Y','Z' };
    
    scanf("%c", &l);
    
    for( i = 0; i <= MAX - 1; i++ )
    
    if( alfabeto[i] == l){
    	printf("%d\n", i + 1);
    	return 0;
	}
    
    
 
    return 0;
}
