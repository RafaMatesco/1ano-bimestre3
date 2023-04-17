#include <stdio.h>

int a [20], b [20], x, y;

main(){

y=19;
for(x=0;x<=19;x++){
	printf("Vetor a [%d]: ", x);
	scanf("%d", &a[x]);
	b[y] = a[x];
		y--;
} 

for(x=0;x<=19;x++){
	printf("vetor b [%d] = %d\n", x, b[x]);
}
	 
}
