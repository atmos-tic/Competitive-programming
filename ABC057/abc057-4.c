#include <stdio.h>
#include <math.h>

int main(void){
	int N, A, B, i, j, k, x = 1, y = 0;
	scanf("%d %d %d", &N, &A, &B);
	double v[N], S = 0, max_v;
	for(i = 0; i < N; i++){
		scanf("%lf", &v[i]);
			
	}

	for(i = 0; i < N; i++){
		max_v = v[i];
		for(j = i; j < N; j++){
			if(max_v < v[j]){
				max_v = v[j];
				k = j;
			}
		}
		v[k] = v[i];
		v[i] = max_v;
	}

	for(i = 0; i < A; i++){
		S += v[i];
	}
	printf("%lf\n", S/A);
	i = 0;
	while(v[A-1]==v[A+i]){
		printf("i%d\n", i);
		i++;
	}
	
	if(S/A == v[A-1]){
		k = 0;
		for(j = 0; j < B-A; j++){
			for(k = 1; k <= A+j; k++){
				x *= (A+i-k-1);
			}
			for(k = 1; k <= A+j; k++){
				x /= k;
			}
			y += x;
		}
		printf("%d\n", y);
	}else{
		printf("%d\n", i+1);
	}
	scanf("%d", &N);

 	return 0;
}