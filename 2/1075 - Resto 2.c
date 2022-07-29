#include <stdio.h>
#include <math.h>
 
int main() {
 
   int n;
   int i;
   int x = 1;
   int rest;
   
   scanf("%d", &n);
   
   for(x ; x <= 10000; x++){    	
   	if(x % n == 2)	
   	printf("%d\n", x); 	  
   }
 
    return 0;
}
