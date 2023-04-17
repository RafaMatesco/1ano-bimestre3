#include <stdio.h>

int a[5][6], b[5][6], c[5][6];
int x, y, z;

main(){
	
	
	for(x=0; x<5; x++){
		for(y=0; y<6; y++){
			do{
				printf("Matriz a[%d][%d]: ", x, y);
				scanf("%d", &a[x][y]);
				if(a[x][y] % 2 != 0){
					printf("digite apenas valores pares.\n");
				}
			}while(a[x][y] % 2 != 0);
		}
	}


for(x=0; x<5; x++){
		for(y=0; y<6; y++){
			do{
				printf("Matriz b[%d][%d]: ", x, y);
				scanf("%d", &b[x][y]);
				if(b[x][y] % 2 == 0){
					printf("digite apenas valores impares.\n");
				}
			}while(b[x][y] % 2 == 0);
		}
	}

for(x=0; x<5; x++){
		for(y=0; y<6; y++){
			c[x][y]= a[x][y] + b[x][y];
			printf("%d\n", c[x][y]);
		}
	}

}
