#include <stdio.h>

int a [20], b [30], c [50], x, y;

main(){

for(x=0;x<=19;x++){
	printf("Vetor a [%d]: ", x);
	scanf("%d", &a[x]);
}

for(x=0;x<=29;x++){
	printf("Vetor b [%d]: ", x);
	scanf("%d", &b[x]);
}

for(x=0;x<=19;x++){
	c[x] = a[x];
}
	
x=0;
for(y=20;y<=49;y++){
		c[y] = b[x];
		x++;
}
	 
for(x=0;x<=19;x++){
	printf("vetor c [%d] = %d\n", x, c[x]);
}	 

for(x=20;x<=49;x++){
	printf("vetor c [%d] = %d\n", x, c[x]);
}
	 
}
