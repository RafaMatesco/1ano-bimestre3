#include <stdio.h>

int a [8][6], b [8][1];
int x, y, z, somatoria;

main(){
	
for(x=0; x < 8; x++){
	for(y=0; y < 6; y++){
		printf("matriz a[%d]{%d]: ", x, y);
		scanf("%d", &a[x][y]);
	}
}

z=0;	
for(x=0; x < 8; x++){
	for(y=0; y < 6; y++){
		somatoria = somatoria + a[x][y];
	}
	b[x][z] = somatoria;
	somatoria = 0;
}

printf("\n\nsomatoria de cada linha da matriz a:")
y=0;
for(x=0; x < 8; x++){
		printf("\n -->linha %d: %d", x, b[x][y]);
}

}
