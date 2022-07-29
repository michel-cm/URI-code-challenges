#include <stdio.h>
 
int main() {
 
    double v;
    
    scanf("%lf", &v);
    
    if( v >= 0 && v <= 25.0000){
    	printf("Intervalo [0,25]\n");
	}else if( v > 25.0000 && v <= 50.0000000){
		printf("Intervalo (25,50]\n");
	}else if( v > 50.0000000 && v <= 75.0000000){
		printf("Intervalo (50,75]\n");
	}
		else if( v > 75.0000000 && v <= 100.0000000){
		printf("Intervalo (75,100]\n");
	}else
	printf("Fora de intervalo\n");
 
    return 0;
}
