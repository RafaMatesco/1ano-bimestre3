#include <stdio.h>

int a [10][7];
int x, y;
double pares, impares, total, P_pares, P_impares;

main(){
	
for(x=0; x < 10; x++){
	for(y=0; y < 7; y++){
		printf("matriz a[%d]{%d]: ", x, y);
		scanf("%d", &a[x][y]);
		total++;
	}
}

	
for(x=0; x < 10; x++){
	for(y=0; y < 7; y++){
		if(a[x][y] % 2 == 0){
			pares++;
		}else{
			impares++;
		}
	}
}

P_pares = (pares/total) * 100;
P_impares = (impares/total) * 100;

printf("============================\nDADOS\n\n");
printf("Pares: %.0lf%\n", pares);
printf("Impares: %.0lf%\n", impares);
printf("\nPercentual Pares: %.1lf%%\n", P_pares);
printf("Percentual Impares: %.1lf%%\n\n", P_impares);
}
