#include <stdio.h>

int a [15], b [15], c [30], x, y;

main(){

for(x=0;x<=14;x++){
	printf("Vetor a [%d]: ", x);
	scanf("%d", &a[x]);
}

for(x=0;x<=14;x++){
	printf("Vetor b [%d]: ", x);
	scanf("%d", &b[x]);
}

for(x=0;x<=14;x++){
	c[x] = a[x];
}
	
x=0;
for(y=15;y<=29;y++){
		c[y] = b[x];
		x++;
}
	 
for(x=0;x<=14;x++){
	printf("vetor c [%d] = %d\n", x, c[x]);
}	 

for(x=15;x<=29;x++){
	printf("vetor c [%d] = %d\n", x, c[x]);
}
	 
}
