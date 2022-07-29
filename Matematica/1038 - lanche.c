#include <stdio.h>

  void retornaTotal(int qtd, int op){ 
 	double total;  
	double um = 4.00;
    double dois = 4.50;
    double tres = 5.00;
    double quatro = 2.00;
    double cinco = 1.50;    
		if(op == 1) {
		total = um * qtd;
      	printf("Total: R$ %.2lf\n", total);	
		}else if(op == 2) {
		total = dois * qtd;
      	printf("Total: R$ %.2lf\n", total);	
		}else if(op == 3) {
		total = tres * qtd;
      	printf("Total: R$ %.2lf\n", total);	
		}else if(op == 4) {
		total = quatro * qtd;
      	printf("Total: R$ %.2lf\n", total);	
		}else if(op == 5) {
		total = cinco * qtd;
      	printf("Total: R$ %.2lf\n", total);	
		}
      	
      	
}
int main() {
 
    double total;
    int qtd,op;
       
  
    	scanf("%d", &op);
      
      
      	scanf("%d", &qtd);
      	retornaTotal(qtd ,op);
	  
    
    return 0;
}
