#include <stdio.h>

int main(void){
	int N, S = 1, i, s;
	scanf("%d", &N);
	for(i = 1; i <= N; i++){
		S *= i;
	}
	s = 1000000000+7;
	printf("%d",(int)S/s);
	return 0;
}