#include <stdio.h>
int main(void){
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n", (A+B<24)?A+B:A+B-24);
 	return 0;
}