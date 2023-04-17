#include <stdio.h>
#include <stdlib.h>

int CPF[11];
int D1Matriz[2][9], D2Matriz[2][10], D1Vetor[9], D2Vetor[10]; 
int x, y, z;
int resp, soma1, digito1, resto1, soma2, digito2, resto2;
double total, totalv, totali, totalvporc, totaliporc;

main(){
do{	
	x = 0; y = 0; z = 0; resp = 0; soma1 = 0;digito1 = 0; resto1 = 0; soma2 = 0; digito2 = 0; resto2 = 0;
	
	printf("Para digitar o seu CPF, a cada numero digitado de enter.\n");
	printf("Digite seu CPF:\n");	
	//LEITURA DO CPF
	for(x=0; x<11; x++){
		do{
			scanf("%d", &CPF[x]);
			if((CPF[x] < 0) || (CPF[x] > 9)){
				printf("Digite um numero valido.\n");
			}
		}while((CPF[x] < 0) || (CPF[x] > 9));
	}
	system("cls");
	
	//---------------TESTE DO PRIMEIRO DIGITO-------------------
	//criando matriz com CPF na primeira linha e os nmrs de 10 até 2 na segunda linha.
	z=10;	
	for(x=0; x<2; x++){
		for(y=0; y<9; y++){ 
			if(x==0){
				D1Matriz[x][y] = CPF[y];	
			}else{
				if(x==1){
					D1Matriz[1][y] = z;
					z=z-1;	
				}
			}			  												
		}
	}
	//multiplicando primeira linha e segunda linha
	x=0;
	z=1;
	for(y=0; y<9; y++){ 
		D1Vetor[y] = D1Matriz[x][y] * D1Matriz[z][y];	
	}
	//somando o resultado das multiplicações
	for(x=0; x<9; x++){ 
		soma1 = soma1 + D1Vetor[x]; 	
	}
	//dividindo por 11 e vendo o resto
	resto1 = soma1 % 11;
	if(resto1 < 2){
		digito1 = 0;
	}else{
		digito1 = 11 - resto1;
	}
	
	//---------------TESTE DO SEGUNDO DIGITO-------------------
	z=11;	
	for(x=0; x<2; x++){
		for(y=0; y<9; y++){ 
			if(x==0){
				D2Matriz[x][y] = CPF[y];
				D2Matriz[x][9] = digito1;	
			}else{
				if(x==1){
					D2Matriz[1][y] = z;
					D2Matriz[1][9] = 2;
					z=z-1;	
				}
			}			  												
		}
	}
	//multiplicando primeira linha e segunda linha
	x=0;
	z=1;
	for(y=0; y<10; y++){ 
		D2Vetor[y] = D2Matriz[x][y] * D2Matriz[z][y];	
		}
	//somando o resultado das multiplicações
	for(x=0; x<10; x++){ 
		soma2 = soma2 + D2Vetor[x]; 	
	}
	//dividindo por 11 e vendo o resto
	resto2 = soma2 % 11;
	if(resto2 < 2){
		digito2 = 0;
	}else{
		digito2 = 11 - resto2;
	}	
	//verificando se o primeiro e segundo digito sao iguais aos digitados.
	if((digito1 == CPF[9]) && (digito2 == CPF[10])){
		printf("O CPF ");
		for(x=0; x<11; x++){
			printf("%d", CPF[x]);
		}
		printf(" esta VALIDO!");
		totalv++;
	}else{
		printf("O CPF ");
		for(x=0; x<11; x++){
			printf("%d", CPF[x]);
		}
		printf(" esta INVALIDO!");
		totali++;
	}
	
	total++;
	
	printf("\n\nDigite 1 para testar outro CPF. \nDigite qualquer tecla e de ENTER para ver os resultados.\n");
	scanf("%d", &resp);
	system("cls");
	}while(resp==1);
	totalvporc = (totalv/total) * 100;
	totaliporc = (totali/total) * 100;

	printf("\n\n--------- DADOS GERADOS ---------\n");
	printf("CPFs testados: %.0lf\nCPFs validos: %.0lf\nCPFs invalidos: %.0lf\n", total, totalv, totali);
	printf("CPFs validos %.0lf%%\n", totalvporc);
	printf("CPFs invalidos %.0lf%%\n", totaliporc);
	system("pause");
	
}
