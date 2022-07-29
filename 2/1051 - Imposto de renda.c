#include <stdio.h>
 
int main() {
 
   double renda,renda2;
   double imposto,imposto2;
   
   scanf("%lf", &renda);
   
   if (renda >= 0 && renda <= 2000){
   	
	printf("isento\n");

   }else if(renda >=2000.01 && renda <= 3000){
   	renda = renda - 2000;
   	imposto = (renda * 8) / 100;	  	
   	printf("R$ %.2lf\n", imposto);
   }else if(renda >=3000.01 && renda <= 4500){
   		renda = renda - 2000;
   		
   		if(renda < 1000.01){ 
		     imposto2 = (renda * 18) / 100; 			  			
		   } else{
		   	renda2 = renda - 1000;
		   	renda = renda -renda2;
		   	imposto2 = (renda * 8) / 100; 
		   	imposto = ((renda2  * 18) / 100) + imposto2;
		   }		
   					
   		printf("R$ %.2lf\n", imposto);
   		
   }else if(renda >4500){
   			renda2 = renda - 1000;
		   	renda = renda -renda2;
		   	imposto2 = (renda * 8) / 100; 
		   	imposto = ((renda2  * 18) / 100) + imposto2;
   }
 		printf("R$ %.2lf\n", imposto);
    return 0;
}
