#include <stdio.h>

int a [4][5], b [4][1], c[5][1];
int x, y, z, somatoria;

main(){
	
for(x=0; x < 4; x++){
	for(y=0; y < 5; y++){
		printf("matriz a[%d]{%d]: ", x, y);
		scanf("%d", &a[x][y]);
	}
}


//somatoria linhas
z=0;	
for(x=0; x < 4; x++){
	for(y=0; y < 5; y++){
		somatoria = somatoria + a[x][y];
	}
	b[x][z] = somatoria;
	somatoria = 0;
}

//somatoria colunas
z=0;	
for(x=0; x < 5; x++){
	for(y=0; y < 4; y++){
		somatoria = somatoria + a[y][x];
	}
	c[x][z] = somatoria;
	somatoria = 0;
}

//somatoria sendo apresentada
printf("\n\nsomatoria de cada linha da matriz a:");
y=0;
for(x=0; x < 4; x++){
		printf("\n -->linha %d: %d", x, b[x][y]);
}

printf("\n\nsomatoria de cada coluna da matriz a:");
y=0;
for(x=0; x < 5; x++){
		printf("\n -->coluna %d: %d", x, c[x][y]);
}

}
