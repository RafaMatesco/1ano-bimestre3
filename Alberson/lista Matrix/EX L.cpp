#include <stdio.h>

int a [15][15];
int x, y, somatoria;

main(){
	
for(x=0; x < 15; x++){
	for(y=0; y < 15; y++){
		printf("matriz a[%d]{%d]: ", x, y);
		scanf("%d", &a[x][y]);
	}
}

y=0;	
for(x=0; x < 15; x++){
   		if(a[x][y] % 2 == 0){
			somatoria = somatoria + a[x][y];
		}
		y++;
	}
printf("somatoria elementos pares diagonal principal: %d", somatoria);
}
