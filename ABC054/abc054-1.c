#include <stdio.h>

int main(void){
	int A, B;
	scanf("%d %d", &A, &B);
	if (A == 1)A = 14;
	if (B == 1)B = 14;
	if (A == B){
		printf("Draw\n");
	}
	else if (A > B){
		printf("Alice\n");
	}
	else{
		printf("Bob\n");
	}
	return 0;
}