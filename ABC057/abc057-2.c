#include <stdio.h>
#include <math.h>

int main(void){
	int N, M, i, j;
	scanf("%d %d", &N, &M);
	double a[N], b[N], c[M], d[M];
	for(i = 0; i < N; i++){
			scanf("%lf %lf", &a[i], &b[i]);
	}
	for(i = 0; i < M; i++){
			scanf("%lf %lf", &c[i], &d[i]);
	}
	int min_j = 0;
	double min_d = 0;
	for(i = 0; i < N; i++){
		min_j = 0;
		min_d = fabs(a[i] - c[0]) + fabs(b[i] - d[0]);
		for(j = 0; j < M; j++){
			if(min_d > (fabs(a[i] - c[j]) + fabs(b[i] - d[j]))){
				min_d = (fabs(a[i] - c[j]) + fabs(b[i] - d[j]));
				min_j = j;
			}
		}
		printf("%d\n", min_j+1);
	}
 	return 0;
}