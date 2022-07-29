#include <stdio.h>
 
int main() {
 
    double n,r;
    int i,j;
    
    j=0;
    
    for (i = 0; i < 6; i++){
		scanf("%lf", &n);
		if(n > 0){
			r = r + n;
			j++;
		}
	
	}
 	printf("%d valores positivos\n%.1lf\n", j, r/j);
    return 0;
}
