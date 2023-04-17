//PARTE 1
#include <stdio.h>
#include <stdlib.h>

int opcao;
int array[10];
int z;
int vezesproc = 9;
int x = 0;
int aa;

void menu(){
	fflush(stdin);
	opcao = 0;
	printf("========= MENU =========");
	printf("\n\nObservacoes:\n-Nao use valores com mais de 10 algarismos, pois assim o programa corre risco de nao funcionar direito\n-Maximo de 10 processos, alem desse valor o sistema nao eh capaz de processar\n");
	printf("\n-Inserir novo processo (1)");
	printf("\n-Eliminar um processo (2)");
	printf("\n-Ordenar processos (3) ");
	printf("\n-finalizar programa (4)\n");
	do{
		scanf("%d", &opcao);
		if((opcao>4) || (opcao<1)){
			printf("digite um numero valido (1,2, 3 ou 4)\n");
		}
	}while((opcao>4) || (opcao<1));
	printf("\n");
}

void novoprocesso(){
	fflush(stdin);
	if(vezesproc <= 0){
		vezesproc =9;
	}
	int resp;
	printf("\nDigite o tamanho do processo:\n");
	scanf("%d", &array[x]);	
	printf("\n");
	x++;
}

void processar(){
	fflush(stdin);
	 //eliminando o menor numero
	int menor = 1000000000;
	int cont;
	int aux;
	
	for(cont = 0; cont <= vezesproc; cont++){ //encontrando menor numero
       if ((array[cont] < menor) && (array[cont] > 0)){
           menor = array[cont];
      }
   }
    for(cont = 0; cont <= vezesproc; cont++){ //colocando o menor numero na ultima posicao (eliminando)
       if (array[cont] == menor){
           array[cont] = -1; //eliminacao
           aux = array[vezesproc];
		   array[vezesproc] = array[cont];
		   array[cont] = aux;
      }
   }
   
   		if((vezesproc >= 0) && (array[vezesproc] != 0)){
	    	printf("array processado:\n");
	    	for(aa=0; aa<=9; aa++){
				if(array[aa] > 0){
					printf("|");
					printf("%d| ", array[aa]);
				}
			}
   		}else{
			printf("seu array de processos esta vazio!");
		}
	printf("\n");
	vezesproc = vezesproc -1;
}

void reordenar(){
	fflush(stdin);
	int conta = 10;
	int y;
	int aux2;
	while(conta > 1){
		for(y=0; y<conta-1; y++){
			if(array[y] > array[y+1]){
				aux2 = array[y];
				array[y] = array[y+1];
				array[y+1] = aux2;
			}
		}
		conta = conta-1;
	}
	
	if((vezesproc >= 0) && (array[vezesproc] != 0)){
		printf("array ordenado!\n");
		for(aa=0; aa<=9; aa++){
			if(array[aa] > 0){
				printf("|");
				printf("%d | ", array[aa]);
			}
		}
	}else{
		printf("seu array de processos esta vazio!");
	}
	printf("\n");
}


//Main---------------------------------------------------------------------------------------
main(){

	do{
		system("cls");
		menu();
		system("cls");
		if(opcao == 1){
			novoprocesso();
		}else{
			if(opcao == 2){
				processar();
				system("pause");
			}else{
				if(opcao == 3){
					reordenar();
					system("pause");
				}else{
					if(opcao == 4){
						system("pause");
						return(0);
					}
				}
			}	
		}
		z = 1;
	}while(z = 1);
	
}
