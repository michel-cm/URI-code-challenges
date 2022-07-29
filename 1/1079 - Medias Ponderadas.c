#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n;
    int i;
    double v1,v2,v3;
    double p1 = 2.0 ;
    double p2 = 3.0;
    double p3 = 5.0;
    double media;
    
    scanf("%d", &n);
    
    for(i = 0; i < n ; i++){    	
		scanf("%lf %lf %lf", &v1, &v2 , &v3);
			media = (((p1 * v1) + (p2 * v2) + (p3 * v3))/ (p1+p2+p3));
			printf("%.1lf\n", media);
		}	
    	
 
    return 0;
}
