#include "stdio.h"

int main (void){
	char a, b;
	scanf("%c %c", &a, &b);
	if(a == b){
		printf("H\n");
	}else{
		printf("D\n");
	}
	return 0;
}