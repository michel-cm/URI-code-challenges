#include <stdio.h>
int main(){
   int h,m,s,n;
   int hh = 3600;
   scanf("%d",&n);

	h = n/hh;
	m = (n-(hh*h)) / 60;
	s = (n-(hh*h)-(m*60));
	
	printf("%d:%d:%d\n",h,m,s);

return 0;
}
