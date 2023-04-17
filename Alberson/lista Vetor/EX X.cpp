#include <stdio.h>

float a[6], b[6];
int x;

main(){
	
	for(x=0;x<=5;x++){
		printf("Vetor a[%d]", x);
		scanf("%d", &a[x]);
	}
	
}