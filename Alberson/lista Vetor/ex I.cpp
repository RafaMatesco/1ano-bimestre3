#include <stdio.h>

int a [5], b [5], c [5], d [15], x, y;

main(){

for(x=0;x<=4;x++){
	printf("Vetor a [%d]: ", x);
	scanf("%d", &a[x]);
	d[x] = a[x];
}

for(x=0;x<=4;x++){
	printf("Vetor b [%d]: ", x);
	scanf("%d", &b[x]);
}

for(x=0;x<=4;x++){
	printf("Vetor c [%d]: ", x);
	scanf("%d", &c[x]);
}
	
x=0;
for(y=5;y<=9;y++){
		d[y] = b[x];
		x++;
}

x=0;
for(y=10;y<=14;y++){
		d[y] = c[x];
		x++;
}
	 
for(x=0;x<=14;x++){
	printf("vetor d [%d] = %d\n", x, d[x]);
}	 
	 
}
