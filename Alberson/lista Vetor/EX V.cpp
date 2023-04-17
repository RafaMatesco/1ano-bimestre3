#include <stdio.h>

int a[30], par, impar, x, y;

main(){
	
	for(x=0; x<=29; x++){
		
		printf("Vetor a[%d]:", x);
		scanf("%d", &a[x]);
		if(a[x]%2==0){
			par++;
		}else{
			impar++;
		}
		
	}
	
	printf("\n--------------------------------\nQuantidades.\n\nnumeros impares: %d\nnumeros pares: %d", impar, par);
}