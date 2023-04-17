#include <stdio.h>

int a[10], b[10], c[20]; 
int x, y;

main(){
	
	for(x = 0; x <= 9; x++){
		printf("Vetor a[%d]:", x);
			scanf("%d", &a[x]);
			if(a[x] % 6 != 0){
				printf("Digite um numero divisivel por 2 e 3\nTente novamente\n\n");
				x = 0;
				x = x-1;
			}
		fflush(stdin);
		}
	

	for(x = 0; x <= 9; x++){
		printf("Vetor b[%d]:", x);
			scanf("%d", &b[x]);
			if(b[x] % 5 != 0){
				printf("Digite um numero multiplo de 5.\nTente novamente\n\n");
				x = 0;
				x = x-1;
			}
		fflush(stdin);
		}

	
	
	for(x = 0; x <= 9;x++){
		c[x] = a[x];
	}
	
	y = 10;
	for(x = 0; x <= 9;x++){
		c[y] = b[x];
		y++;
	}
	
	for(x = 0; x <= 19;x++){
		printf("Vetor c[%d]: %d\n",x ,c[x]);
	}
}
