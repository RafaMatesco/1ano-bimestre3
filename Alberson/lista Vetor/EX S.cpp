#include <stdio.h>

int a [6], b[6] ,c[12], x, y;

main(){
	
	do{
	for(x = 0; x <= 5; x++){
		printf("Vetor a[%d]:", x);
			scanf("%d", &a[x]);
			if(a[x] % 2 != 0){
				printf("digite um valor par.\nTente novamente\n\n");
				x=0;
				x = x-1;
			}
		fflush(stdin);
		}
		fflush(stdin);
	}while(a[x] % 2 != 0);
	
	do{
	for(x = 0; x <= 5; x++){
		printf("Vetor b[%d]:", x);
			scanf("%d", &b[x]);
			if(b[x] % 2 == 0){
				printf("digite um valor impar.\nTente novamente\n\n");
				x = 0;
				x = x-1;
			}
		fflush(stdin);
		}
		fflush(stdin);
	}while(b[x] % 2 == 0);
	
	
	for(x = 0; x <= 5;x++){
		c[x] = a[x];
	}
	
	y = 6;
	for(x = 0; x <= 5;x++){
		c[y] = b[x];
		y++;
	}
	
	for(x = 0; x <= 11;x++){
		printf("Vetor c[%d]: %d\n",x ,c[x]);
	}
}