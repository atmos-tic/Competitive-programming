#include <stdio.h>
#include <math.h>
int main(void){
	int M, N;
	int A[50], B[50];
	int i = 0, j = 0, k = 0;
	char a[50][50], b[50][50];
	int check_start[2500][2] = { 0 }, check_flag = 0, stop_flag = 1, check = 0, checkMax = 0;
	scanf("%d, %d", &N, &M);
	for (i = 0; i < N; i++){
		scanf("%s", a[i]);
		for (j = 0; j < N; j++){
			if (a[i][j] == '.')A[i] = (A[i]<<1) + 0;
			else if (a[i][j] == '#')A[i] = (A[i] << 1) + 1;
		}
	}
	printf("aa\n");
	for(i = 0; i < M; i++){
		scanf("%s", b[i]);
		for (j = 0; j < M; j++){
			if (b[i][j] == '.')B[i] = (B[i] << 1) + 0;
			else if (b[i][j] == '#')B[i] = (B[i] << 1) + 1;
		}
	}

	for (k = 0; k < M;){
		stop_flag = 1;//これが0にならなかったらマッチなし
		if (k==0){//Bの最初の行
			for (i = 0; i < N; i++){
				for (j = 0; j < N - M; j++){
					if (((((A[i] >> (
				N - M - j))&((int)pow(2, M) - 1))) ^ B[k]) == 0){
						k++;
						check_start[check][0] = i;
						check_start[check][1] = j;
						check++; 
						stop_flag = 0;
					}
				}
			}
			checkMax = check;
		}
		else{
			for (i = 0; i < checkMax; i++)
			if ((((A[check_start[i][0]] >> (N - M - check_start[i][1]))&((int)pow(2, M) - 1)) ^ B[k])==0){
					k++;
					check_start[i][0]++;
					stop_flag = 0;
			}
		}
		if (stop_flag){
			break;
		}
	}
	if (stop_flag){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
	scanf("%s", a);
	return 0;
}