#include <stdio.h>

int a [5][5];
int x, y, somatoria;

main(){
	
for(x=0; x < 5; x++){
	for(y=0; y < 5; y++){
		printf("matriz a[%d]{%d]: ", x, y);
		scanf("%d", &a[x][y]);
	}
}

y=0;	
for(x=0; x < 5; x=x+2){
		somatoria = somatoria + a[x][y];
		y=y+2;
	}
printf("somatoria de elemntos em posicoes impares da diagonal principal: %d", somatoria);
}
