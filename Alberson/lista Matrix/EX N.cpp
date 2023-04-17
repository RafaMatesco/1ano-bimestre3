#include <stdio.h>

int a [7][7];
int x, y, pares;

main(){
	
for(x=0; x < 7; x++){
	for(y=0; y < 7; y++){
		printf("matriz a[%d]{%d]: ", x, y);
		scanf("%d", &a[x][y]);
	}
}

	
for(x=0; x < 7; x++){
	for(y=0; y < 7; y++){
		if(a[x][y] % 2 == 0){
			pares++;
		}
	}
}
printf("total elementos pares na matriz: %d", pares);
}
