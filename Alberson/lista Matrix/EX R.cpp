#include <stdio.h>

int a[4], b[4], c[4], d[4], e[4][4];
int x, y, i;

main(){
	
	y=0;
	for(x=0; x<4; x++){
		printf("Matriz a[%d]: ", x);
		scanf("%d", &a[x]);
	}
	for(x=0; x<4; x++){
		printf("Matriz b[%d]: ", x);
		scanf("%d", &b[x]);
	}
	for(x=0; x<4; x++){
		printf("Matriz c[%d]: ", x);
		scanf("%d", &c[x]);
	}
	for(x=0; x<4; x++){
		printf("Matriz d[%d]: ", x);
		scanf("%d", &d[x]);
	}
	

	for(x=0; x<4; x++){
		for(y=0; y<4; y++){
			if(x==0){
				e[x][y]	= a[y] * 2;
			}
			if(x==1){
				e[x][y]	= b[y] * 3;
			}
			if(x==2){
				e[x][y]	= c[y]* 4;
			}
			if(x==3){ 
			//COMO FAZER FATORIAL DE UM NUMERO
				if(d[y]==0){ //fatorial de 0 é 1 
					e[x][y] = 1;
				}else{
					e[x][y] = 1;
					for(i=1; i<=d[y]; i++){
						e[x][y]	= i * e[x][y];
					}
				}
			}
		}
	}

for(x=0; x<4; x++){
	for(y=0; y<4; y++){
		printf("\nMatriz e[%d][%d]: %d", x, y, e[x][y]);		
	}
}

}


