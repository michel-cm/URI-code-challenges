#include <stdio.h>
 
int main() {
 
 	double n1,n2,media; 
 		 
	 do{
	 	 scanf("%lf %lf", &n1 , &n2);
	 if(n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10){
	 	media = (n1 + n2)/2;
	 	printf("media = %.2lf\n", media);
	 }
	 if(n1 >= 0 && n1 <= 10 && n2 < 0 || n2 >= 11){
	 	do{
	 		printf("nota invalida\n");
	 		scanf("%lf", &n2);
		 }while(n2 < 0 || n2 >= 11);
		 media = (n1 + n2)/2;
	 	printf("media = %.2lf\n", media);
	 }
	 if(n1 < 0 || n1 >= 10 && n2 >= 0 && n2 <= 10){
	 	do{
	 		printf("nota invalida\n");
	 		scanf("%lf", &n1);
		 }while(n1 < 0 || n1 >= 11);
		 media = (n1 + n2)/2;
	 	printf("media = %.2lf\n", media);
	 }		
	 }while(n1 < 0 || n1 >= 10 && n2 < 0 && n2 >= 10); 
 	 	 	 	 	 	
	  return 0;
 	
}
