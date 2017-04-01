#include <stdio.h>

int main(void){
	int N, i, j;
	scanf("%d", &N);
	int a[3*N];
	char str[3*N+1];
	gets(str);
	for(i = 0; i < 3*N; i++){	
		a[i] = atoi(str[i]);
	}
	int max_a, J;
	for(i = 0;i < 3*N;i++){
		max_a = a[i];
		J = i;
		for(j = i;j < 3*N; j++){
			if(max_a < a[j]){
				max_a = a[j];
				J = j;
			}
		}
		a[J] = a[i];
		a[i] = 	max_a;
	}
	int S = 0;
	for(i = N; i < 2*N; i++){
		S += a[i];
	}
	return 0;
}