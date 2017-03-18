#include "stdio.h"

int main (void){
	double X, i = 1, S = 0, x; 
	scanf("%lf",&X);
	while(X > 0){
		X -= i;
		i++;
	}
	printf("%d", (int)i - 1);
//	scanf("%lf",&X);
	return 0;
}