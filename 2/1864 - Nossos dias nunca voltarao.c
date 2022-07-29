#include <stdio.h>
#include <stdlib.h>
#define MAX 34

int main() {
 
    int n;
    char l[MAX] = {"LIFE IS NOT A PROBLEM TO BE SOLVED\n"};
    int i;
    
    scanf("%d", &n);
    
    for(i = 0; i < n ; i++){
    	printf("%c", l[i]);    	
	}  
 	
 	printf("\n");
 	
    return 0;
}

