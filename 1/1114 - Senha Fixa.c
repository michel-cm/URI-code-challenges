#include <stdio.h>
 
int main() {
 
    int correta = 2002;
    int senhaDigitada;
    
    do{
    	scanf("%d", &senhaDigitada);
		if(senhaDigitada != correta)
		printf("Senha Invalida\n");  	
	}while (senhaDigitada != correta);
	printf("Acesso Permitido\n");
    
    return 0;
}
