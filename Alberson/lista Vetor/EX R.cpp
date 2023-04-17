#include <stdio.h>

int a [6], b[6] ,c[6] ,d[6];
int x, y;

main(){
	
	for(x = 0; x <= 5; x++){
		printf("Vetor a[%d]:", x);
		scanf("%d", &a[x]);
	}
	for(x = 0; x <= 5; x++){
		printf("Vetor b[%d]:", x);
		scanf("%d", &b[x]);
	}
	
	
	y = 0;
	for(x = 1; x <= 5; x = x+2){
		c[y] = a[x];
		y++;
	}
	y = 3;
	for(x = 1; x <= 5; x = x+2){
		c[y] = b[x];
		y++;
	}

	y = 0;
	for(x = 0; x <= 5; x = x+2){
		d[y] = a[x];
		y++;
	}
	y = 3;
	for(x = 0; x <= 5; x = x+2){
		d[y] = b[x];
		y++;
	}
	
	for(x = 0; x <= 5;x++){
		printf("Vetor impares(posicao): %d\n",c[x]);
	}
	for(x = 0; x <= 5;x++){
		printf("Vetores pares(posicao): %d\n",d[x]);
	}
}