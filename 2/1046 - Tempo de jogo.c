#include <stdio.h>
#include <math.h>
 
int main() {
 
   int inic,final;
   int i ,x;
   
   scanf("%d %d", &inic,&final);
   
   if (inic < final){
   	for (i = 0; inic < final; i++ )
   	inic ++;
   		printf("O JOGO DUROU %d HORA(S)\n", i);   		
   }
   else if (inic == final)
   printf("O JOGO DUROU 24 HORA(S)\n");
  else {
   	for(i = 0; inic < 24 ; i++)
	   inic++;	   
	   if(inic == 24){
	   	inic = 0;
	   	x = i + final;
	   	printf("O JOGO DUROU %d HORA(S)\n", x);
	   }	
   }
   	
 
    return 0;
}
