#include <stdio.h>
#include <math.h>
 
int main() {
 
   int a,b,c;
   
   scanf("%d %d %d\n", &a,&b,&c);
   
   int maiorAB = (a+b+abs(a-b)) / 2;
   
   		if (maiorAB > c)   	 
  		 printf("%d eh o maior\n", maiorAB);
  		 else{
  		 	maiorAB = c ;
  		 	printf("%d eh o maior\n", maiorAB);
		   }
 
    return 0;
}
