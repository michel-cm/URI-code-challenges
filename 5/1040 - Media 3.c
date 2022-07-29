#include <stdio.h>
#include <math.h>
 
int main() {
 
    double v1,v2,v3,v4;
    double p1 = 2.0 ;
    double p2 = 3.0;
    double p3 = 4.0;
    double p4 = 1.0;
    double media,ne;
    
    scanf("%lf %lf %lf %lf", &v1,&v2,&v3,&v4);
    
    	media = (((p1 * v1) + (p2 * v2) + (p3 * v3) + (p4 * v4))/ (p1+p2+p3+p4));
		printf("Media: %.1lf\n", media);
		
		if(media >= 7.0){
			printf("Aluno aprovado.\n");
		}
		if(media < 5.0)
		printf("Aluno reprovado.\n");
		
		if(media >= 5.0 && media <= 6.9){
			printf("Aluno em exame.\n");
			scanf("%lf", &ne);
			printf("Nota do exame: %.1lf\n", ne);
			  media = (media +ne) / 2;
			  	if(media >= 5){
			  		printf("Aluno aprovado.\n");
			  		printf("Media final: %.1lf\n", media); 
				  } else{
				  	printf("Aluno reprovado.\n");	
				  	printf("Media final: %.1lf\n", media); 	
				  }			  		
		}	  		
 
    return 0;
}
