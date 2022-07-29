#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void troca(float *a, float *b, float *c){
	float temp;
	
	if ( *b > *a && *b > *c && *c > *a){
   		temp = *a;
   		*a = *b;
   		*b = *c;
   		*c = temp;   	
   }else if( *b > *a && *b > *c && *c < *a){
   		temp = *a;
   		*a = *b;
   		*b = temp;   		
   }
   else if ( *c > *a && *c > *b && *b >= *a){
   		temp = *a;
   		*a = *c;   		
   		*c = temp; }
	else if (*c > *a && *c > *b && *b < *a){
		temp = *a;
   		*a = *c;
   		*c = temp;   		
	}
   else if( *a >= *c && *b < *c){
   			temp = *b;
			*b = *c;
			*c = temp;   		
	   }
  if( *a >= *b+*c)
   		printf("NAO FORMA TRIANGULO\n");
   		else if( *a**a == (*b**b) + (*c**c))
			printf("TRIANGULO RETANGULO\n");
		else if( *a**a > (*b**b) + (*c**c))
	  		 printf("TRIANGULO OBTUSANGULO\n");
		else if( *a**a < (*b**b) + (*c**c))
	   	printf("TRIANGULO ACUTANGULO\n");
	if(*a == *b && *b == *c)
   		printf("TRIANGULO EQUILATERO\n");
   	else if(*a == *b || *b == *c)
   		printf("TRIANGULO ISOSCELES\n");
    	
}
 
int main() {
 
   float a,b,c;   
   
   scanf("%f %f %f",&a , &b , &c);
   
   
   	troca(&a, &b , &c);   	
   	
   	
    return 0;
}
