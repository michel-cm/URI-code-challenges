#include <stdio.h>
 
int main() {
 
   double sal;
   double novo, reajuste;
   
   scanf("%lf", &sal);
   
   if (sal >= 0 && sal <= 400){
   	
   	reajuste = (sal * 15) / 100;
	novo = reajuste + sal;	
	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n",novo, reajuste);

   }else if(sal >=400.01 && sal <= 800){
   	
   	reajuste = (sal * 12) / 100;
	novo = reajuste + sal;   	
   	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n",novo, reajuste);
   }else if(sal >=800.01 && sal <= 1200){
   		
   		reajuste = (sal * 10) / 100;
		novo = reajuste + sal; 	
   		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n",novo, reajuste);
   }else if(sal >=1200.01 && sal <= 2000){
   		reajuste = (sal * 7) / 100;
		novo = reajuste + sal; 	
   		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n",novo, reajuste);
   }else{
   		reajuste = (sal * 4) / 100;
		novo = reajuste + sal; 	
   		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n",novo, reajuste);
   }
 
    return 0;
}
