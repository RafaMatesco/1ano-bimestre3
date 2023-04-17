#include <stdio.h>
#include <stdlib.h>

int vet[15], fat[15], i;

main(){
    for (i = 0; i < 15; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);
    	fflush(stdin);
	}
    for (i = 0; i < 15; i++) {
        for (fat[i] = 1; vet[i] > 1; vet[i]--) {
            fat[i] *= vet[i];
            fflush(stdin);
        }
        printf("%d\n", fat[i]);
    }
    system("pause");
    return 0;
}




