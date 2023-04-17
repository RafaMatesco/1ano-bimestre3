//PARTE 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char progs[11];
char progsAptos[11];
char progsSusp[11];
char progsTerminados[513];
int opcao;
int contNovo;
int contApto;
int contSusp;
char deseja[11];
int contd;

//menu
void Menu(){
	opcao = 0;
	puts("==========MENU==========\n");
	puts("OBS: o processamento maximo eh 10 programas\nOBS: nao usa a letra (z) minuscula\n");
	printf("1-Abrir novo programa \n2-Listar programas na memoria \n3-Listar programas de aptos \n4-Listar programas na fila de suspensos \n");
	puts("5-Enviar programa da memoria para fila de aptos \n6-Executar programa \n7-Tirar programa da fila de suspensos");
	scanf("%d", &opcao);
}

//1
void novoProg(){		
		if(contNovo<10){
			int x;
			puts("Adicione um programa na fila: ");	
			progs[contNovo] = getchar();
			fflush(stdin);
			for(x=0; x<contNovo; x++){
				if((progs[contNovo] == progs[x]) || (progs[x] == 'z')){
					puts("Esse programa ja foi aberto ou eh um nome invalido, tente novamente");
					system("pause");
					fflush(stdin);
					contNovo--;	
				}	
			}
		}else{
			puts("Sua memoria esta cheia!");
			system("pause");
			}
		fflush(stdin);
		contNovo++;	
}

//2
void listarProg(){
	int x;
	printf("|");
	for(x=0; x<contNovo; x++){
		if(progs[x] != 'z'){
			printf(" %c |", progs[x]);
			fflush(stdin);	
		}			
	}
	puts("");
	system("pause");
	fflush(stdin);
}

//3
void listarProgApto(){
	fflush(stdin);
}

//4
void listarProgSusp(){
	fflush(stdin);
}

//5
void enviarProgApto(){
	int x, y, z, random, erro;
	
	if((contSusp + contApto) < contNovo){
		printf("|");
		for(x=0; x<contNovo; x++){
			if(progs[x] != 'z'){
				printf(" %c |", progs[x]);
				fflush(stdin);
			}
		}
		puts("\nQual destes programas voce deseja executar?");
		deseja[contd] = getchar();
		system("cls");
		fflush(stdin);
		for(x=0; x<contNovo; x++){
			if(deseja[contd] == progs[x]){
				fflush(stdin);
				srand (time(NULL));
				random = rand() % 2; //SORTEANDO PARA SER SUSPENSO OU APTO 
				fflush(stdin);
				if(random % 2 == 0){
					fflush(stdin);
					progsAptos[contApto] = progs[x];//PROG NA MEMORIA VIRA APTO
					progs[x] = 'z';
				    contApto++;
					puts("programa adicionada na fila de Aptos\n");
					fflush(stdin);
				}else{
					if(random % 2 != 0){
						fflush(stdin);
						progsSusp[contSusp] = progs[x];//PROG NA MEMORIA VIRA SUSPENSO
						progs[x] = 'z';
						contSusp++;
						puts("programa suspendido\n");
						fflush(stdin);
					}
				}
			}
		}
		fflush(stdin);
		if((deseja[contd] != progs[0]) && (deseja[contd] !=progs[1]) && (deseja[contd] !=progs[2]) && (deseja[contd] !=progs[3]) && (deseja[contd] !=progs[4]) && (deseja[contd] !=progs[5]) && (deseja[contd] !=progs[6]) && (deseja[contd] !=progs[7]) && (deseja[contd] !=progs[8]) && (deseja[contd] !=progs[9])){
				printf("Digite o nome de um programa que exista\n");					
		}
	}else{
		puts("Voce ja enviou todos os programas!");
	}
		contd++;
		system("pause");
		fflush(stdin);
}

//6
void executarProg(){
	fflush(stdin);
}

//7
void tirarProgSusp(){
	fflush(stdin);
}


main(){
	int infinito = 1;
	while(infinito > 0){
		
		system("cls");
		fflush(stdin);
		Menu();
		
		if(opcao == 1){
			system("cls");
			fflush(stdin);
			novoProg();
		}else{
			if(opcao == 2){
				system("cls");
				fflush(stdin);
				listarProg();
			}else{
				if(opcao == 3){
					system("cls");
					fflush(stdin);
					listarProgApto();
				}else{
					if(opcao == 4){
						system("cls");
						fflush(stdin);
						listarProgSusp();
					}else{
						if(opcao == 5){
							system("cls");
							fflush(stdin);
							enviarProgApto();
						}else{
							if(opcao == 6){
								system("cls");
								fflush(stdin);
								executarProg();
							}else{
								if(opcao == 7){
									system("cls");
									fflush(stdin);
									tirarProgSusp();
								}
							}
						}
					}				
				}
			}
		}
	}	
}