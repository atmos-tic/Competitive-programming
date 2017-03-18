#include "stdio.h"
#include "math.h"
int main (void){
	double N, K, S, max_a;
	int i, j, x;
	scanf("%lf %lf", &N, &K);
	double a[(int)N];
	for(i = 0; i < N; i++){
		scanf("%lf", &a[i]);
	}
	int s[(int)pow(2,N)];
	x = (int)pow(2,N);
	for(j = 0; j < N; j++){
		if(i < 
	}
	i = 0;
	while(S < K){
		S += a[i];
		i++;
	}
	if(S == K){
		printf("%d\n", N-i);
	}else{
		while(S-K<a[i]){
			S += a[i];
			i++;
		}
	}
	return 0;
}