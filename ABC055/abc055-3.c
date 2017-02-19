#include <stdio.h>

int main(void){
	double N, M, S;
	scanf("%lf %lf", &N, &M);
	S = N + (M-2*N)/4;
	printf("%.0lf",S);
	return 0;
}