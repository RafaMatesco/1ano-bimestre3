#include <stdio.h>

int a[10], b[10], c[10];
int x;

main(){
	
	for(x=0;x<=9;x++){
		printf("Vetor a [%d]:", x);
		scanf("%d", &a[x]);
	}
	
	printf("\n--------------------\n");
	
	for(x=0;x<=9;x++){
		printf("Vetor b [%d]:", x);
		scanf("%d", &b[x]);
	}
	
	
	for(x=0;x<=9;x++){
		c[x] = a[x] + b[x];
		c[x] = c[x] * c[x];
	}


	for(x=0;x<=9;x++){
		printf("\n-----------------------------\nVetor c [%d]: %d", x, c[x]);
	}
}