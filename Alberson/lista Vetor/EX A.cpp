#include <stdio.h>

int matriz[2][5];
int x;
int y;

main(){
	
for(x=0; x<=1; x++){
	for(y=0; y<=4; y++){
		printf("\ndigite o numero na linha %d e coluna %d: ", x, y);
		scanf("%d", &matriz[x][y]);
	}
}	
	

for(x=0; x<=1; x++){
	for(y=0; y<=4; y++){
		printf("\nmatriz [%d] [%d]: %d", x, y, matriz[x][y]);
	}
}	



}