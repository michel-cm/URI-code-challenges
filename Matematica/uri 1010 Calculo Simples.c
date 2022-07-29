#include <stdio.h>

int main (){
	
	int pc1,n1,pc2,n2;
	double v1,v2;	
	double r;
	
	scanf("%d %d %lf",&pc1 , &n1 ,&v1);	
	scanf("%d %d %lf",&pc2 , &n2 ,&v2);	
	
	 r = (n1 * v1 + n2 * v2);	
		
	printf("VALOR A PAGAR: R$ %.2lf\n", r );
	
	return 0 ;
	
}
