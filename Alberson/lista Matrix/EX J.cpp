#include <stdio.h>

int a[6][5], b[6][5];
int x, y;

main() {

for(x=0; x<=5; x++){
	for(y=0; y<=4; y++){
		printf("Vetor a [%d][%d]: ", x, y);
  		scanf("%d", &a[x][y]);	 
	}
}

for(x=0; x<=5; x++){
	for(y=0; y<=4; y++){
		b[x][y] = a[x][y];
		if(b[x][y] % 2 == 0){
        	b[x][y] = b[x][y] + 5; 		  	 	   		
		}else{
			b[x][y] = b[x][y] - 4;
		}
	}
}

for(x=0; x<=5; x++){
	for(y=0; y<=4; y++){
		printf("\n--------------------------------\nVetor b[%d][%d]: %d", x, y, b[x][y]);
	}
}

}