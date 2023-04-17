#include <stdio.h>

int matriz[3][5];
int matrizb[3][5];
int x;
int y;

main(){
	
for(x=0; x<=2; x++){
	for(y=0; y<=4; y++){
		printf("digite o numero da matriz A na linha %d e coluna %d: ", x, y);
		scanf("%d", &matriz[x][y]);
		matrizb[x][y] = (matriz[x][y] * matriz[x][y]);
	}
}	

for(x=0; x<=2; x++){
	for(y=0; y<=4; y++){
		printf("\nMatriz B [%d][%d]: %d", x, y, matrizb[x][y]);
	}
}


}