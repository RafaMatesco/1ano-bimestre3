#include <stdio.h>

int a[10];
int x;
double impar, porcentagem;

main(){
	
	for(x=0;x<=9;x++){
		printf("Vetor a[%d]", x);
		scanf("%d", &a[x]);
		if(a[x]%2!=0){
			impar++;
		}
	}
	fflush(stdin);
	//10 eh igual a 100% entao divide o total de impares e faz vezes 100.
	porcentagem = (impar/10) * 100;
	printf("\nElementos impares vetor a: %.0lf", impar);
	printf("\nPercentual impares em relacao ao total de elementos: %.1lf%%", porcentagem);
	
}
	