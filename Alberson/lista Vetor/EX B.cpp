#include <stdio.h>

int matriz[2][4];
int matrizb[2][4];
int x;
int y;

main(){
	
for(x=0; x<=1; x++){
	for(y=0; y<=3; y++){
		printf("\ndigite o numero da matriz A na linha %d e coluna %d: ", x, y);
		scanf("%d", &matriz[x][y]);
		matrizb[x][y] = (matriz[x][y] * 3);
	}
}	

for(x=0; x<=1; x++){
	for(y=0; y<=3; y++){
		printf("\nMatriz B [%d][%d]: %d", x, y, matrizb[x][y]);
	}
}	












}