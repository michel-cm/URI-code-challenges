#include <stdio.h>
 
int main() {
 
    int horaInicial, horaFinal;
    int minutoInicial , minutoFinal;
    
    int i , j ;
    
    scanf("%d %d %d %d", &horaInicial , &minutoInicial, &horaFinal, &minutoFinal);
    
    if(horaInicial == horaFinal && minutoInicial == minutoFinal){
    	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else if (horaInicial < horaFinal && minutoInicial < minutoFinal){
		i = horaFinal - horaInicial;
		j = minutoFinal - minutoInicial;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", i,j);
	}else if (horaInicial < horaFinal && minutoInicial > minutoFinal){
		i = horaFinal - horaInicial;
		j = minutoFinal - minutoInicial;
		
		if( j < 0){
			i--;
			j = j +60;
		}
		
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", i,j);
	}else {
		i = horaFinal - horaInicial;
		printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", i);
	}
 
    return 0;
}
