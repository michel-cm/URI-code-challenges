#include <stdio.h>
 
int main() {
     
    int escolha;
	int gasolina = 0;
	int diesel = 0;
    int alcool = 0;
    do{
    	scanf("%d",&escolha);
    	if(escolha == 1){
    		alcool ++;
		}else if(escolha == 2){
			gasolina++;
		}else if(escolha == 3){
			diesel++;
		}   	
	}while( escolha != 4 );
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel);
	
    
    return 0;
}
