#include <stdio.h>

int a[15];
int x, par;

main(){
	
	for(x=0;x<=14;x++){
		printf("Vetor a[%d]", x);
		scanf("%d", &a[x]);
		if(a[x]%2==0){
			par++;
		}
	}
	
	printf("\nElementos pares vetor a: %d", par);
}