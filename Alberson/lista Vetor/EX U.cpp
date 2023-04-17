#include <stdio.h>

int a[12], b[12], c[24]; 
int x, y;

main(){
	
	for(x = 0; x <= 11; x++){
		printf("Vetor a[%d]:", x);
			scanf("%d", &a[x]);
			if(a[x] % 6 != 0){
				printf("Digite um numero divisivel por 2 e 3\nTente novamente\n\n");
				x = 0;
				x = x-1;
			}
		fflush(stdin);
		}
	

	for(x = 0; x <= 11; x++){
		printf("Vetor b[%d]:", x);
			scanf("%d", &b[x]);
			if(b[x] % 5 == 0){
				printf("Digite um numero nao multiplo de 5.\nTente novamente\n\n");
				x = 0;
				x = x-1;
			}
		fflush(stdin);
		}
		fflush(stdin);
	
	
	for(x = 0; x <= 11;x++){
		c[x] = a[x];
	}
	
	y = 12;
	for(x = 0; x <= 11;x++){
		c[y] = b[x];
		y++;
	}
	
	for(x = 0; x <= 23;x++){
		printf("Vetor c[%d]: %d\n",x ,c[x]);
	}
}
