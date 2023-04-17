#include <stdio.h>

int matriz[4][5];
int matrizb[4][5];
int matrizc[4][5];
int x;
int y;
int cont;

main(){
	
for(x=0; x<=3; x++){
	for(y=0; y<=4; y++){
		printf("digite o numero da matriz A na linha %d e coluna %d: ", x, y);
		scanf("%d", &matriz[x][y]);
	}
}	
printf("\n=======================================================\n\n");	
for(x=0; x<=3; x++){
	for(y=0; y<=4; y++){
		printf("digite o numero da matriz B na linha %d e coluna %d: ", x, y);
		scanf("%d", &matrizb[x][y]);
		matrizc[x][y] = (matriz[x][y] - matrizb[x][y]);
	}
}		
	
for(x=0; x<=3; x++){
	for(y=0; y<=4; y++){
		cont++;
		printf("\n matrizA(%d) - matrizB(%d) = %d",cont, cont, matrizc[x][y]);
	}
}		
	
	
}