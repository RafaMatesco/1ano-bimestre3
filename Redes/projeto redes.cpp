#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool DHCP, FTP, IOT, leitura, escrita, listar, del; 
int resp1,resp2,resp3, resp4, perms, dns, ip, gateway;
char usuario[16], senha[16];
int x, y;

int DNS[4]; //8.8.8.8

int IP1;//192
int IP2;//168
int IP3;//0
int IP4;//10

int gateway1;//192
int gateway2;//168
int gateway3;//0
int gateway4;//1

main(){

do{ //IOT
	printf("\nDeseja ativar o servico IOT?\n 1-sim  2-nao\n");
	scanf("%d", &resp1);
	
	if(resp1 == 1){
		printf("servico IOT ativado.\n");
		IOT = true;
	}else{
		if(resp1 == 2){
			printf("servico IOT desativado.\n");
			IOT = false;
		}else{
			printf("digite um valor valido.\n");		
		}
	}
}while((resp1 > 2) || (resp1 < 1));

resp1 = 0;

system("cls");

do{ //FTP
	printf("Deseja ativar o servico FTP?\n 1-sim  2-nao\n");
	scanf("%d", &resp1);
	
	if(resp1 == 1){
		printf("crie um nome de usuario: ");
		fflush(stdin);
		fgets(usuario, 16, stdin);
		printf("crie uma senha: ");
		fflush(stdin);
		fgets(senha, 16, stdin);
		printf("deseja adicionar alguma permissao ao usuario:\n 1-sim  2-nao\n");
		scanf("%d", &resp2);
		if(resp2 == 1){
			do{
					printf("PERIMSSAO: listar \n 1-sim  2-nao\n ");
					resp3 = 0;
					scanf("%d", &resp3);
							if(resp3 == 1){
								listar = true;
							}else{
								if(resp3 == 2){
									listar = false;
								}else{
									printf("digite um valor valido.\n");		
								}
							}
					printf("PERIMSSAO: leitura \n 1-sim  2-nao\n ");
					resp3 = 0;
					scanf("%d", &resp3);
							if(resp3 == 1){
								leitura = true;
							}else{
								if(resp3 == 2){
									leitura = false;
								}else{
									printf("digite um valor valido.\n");		
								}
							}
					printf("PERIMSSAO: escrita \n 1-sim  2-nao\n ");
					resp3 = 0;
					scanf("%d", &resp3);
							if(resp3 == 1){
								escrita= true;
							}else{
								if(resp3 == 2){
									escrita= false;
								}else{
									printf("digite um valor valido.\n");		
								}
							}
					printf("PERIMSSAO: deletar \n 1-sim  2-nao\n ");
					resp3 = 0;
					scanf("%d", &resp3);
							if(resp3 == 1){
								del = true;
							}else{
								if(resp3 == 2){
									del = false;
								}else{
									printf("digite um valor valido.\n");		
								}
							}
			}while((resp2 > 2) || (resp2 < 1));
		}
	printf("servico FTP ativado.\n");
			FTP = true;
	}else{
		if(resp1 == 2){
			printf("servico FTP desativado.\n");
			FTP = false;
		}else{
			printf("digite um valor valido.\n");		
		}
	}
}while((resp1 > 2) || (resp1 < 1));

system("cls");

do{ //DHCP
	printf("Deseja ativar o servico DHCP?\n 1-sim  2-nao\n");
	scanf("%d", &resp4);
	if(resp4 == 1){
		puts("digite o DNS (aperte enter a cada numero digitado):");
		fflush(stdin);
		for(x=0; x<4; x++){
			scanf("%d", &DNS[x]);
		}
		puts("Digite a faixa de IP (digite um grupo e de enter, assim: 192(enter) 168(enter) 0(enter) 10(enter) ):");
		fflush(stdin);
		do{
			scanf("%d", &IP1);
			if(IP1 != 192){
				printf("DIgite o valor correto.\n");
			}
		}while(IP1 != 192);
		do{
			scanf("%d", &IP2);
			if(IP2 != 168){
				printf("DIgite o valor correto.\n");
			}
		}while(IP2 != 168);
		do{
			scanf("%d", &IP3);
			if(IP3 != 0){
				printf("DIgite o valor correto.\n");
			}
		}while(IP3 != 0);
		do{
			scanf("%d", &IP4);
			if(IP4 != 10){
				printf("DIgite o valor correto.\n");
			}
		}while(IP4 != 10);
		
		puts("Digite o gateway (digite um grupo e de enter, assim: 192(enter) 168(enter) 0(enter) 1(enter) ):");
		fflush(stdin);
		do{
			scanf("%d", &gateway1);
			if(gateway1 != 192){
				printf("DIgite o valor correto.\n");
			}
		}while(gateway1 != 192);
		do{
			scanf("%d", &gateway2);
			if(gateway2 != 168){
				printf("DIgite o valor correto.\n");
			}
		}while(gateway2 != 168);
		do{
			scanf("%d", &gateway3);
			if(gateway3 != 0){
				printf("DIgite o valor correto.\n");
			}
		}while(gateway3 != 0);
		do{
			scanf("%d", &gateway4);
			if(gateway4 != 1){
				printf("DIgite o valor correto.\n");
			}
		}while(gateway4 != 1);
		
		printf("servico DHCP ativado.\n");
		DHCP = true;
	}else{
		if(resp4 == 2){
			puts("Servico DHCP desativado.");
			fflush(stdin);
			DHCP = false;
		}else{
			puts("Digite um valor valido");
			fflush(stdin);
		}
	}
	
}while((resp4 > 2) || (resp4 < 1));

system("cls");

printf("\n=======================\nestado dos servicos: \n");
printf("\nFTP:%s", FTP ? "true" : "false"); 
if(FTP == true){
	printf("\n Nome de usuario: %s \n Senha: %s\n", usuario, senha);
	if(resp2 == 1){
		printf(" estado das permissoes: ");
		printf("\n leitura:%s", leitura ? "true" : "false");
		printf("\n escrita:%s", escrita ? "true" : "false"); 
		printf("\n listar:%s", listar ? "true" : "false ");
		printf("\n deletar:%s\n", del ? "true" : "false ");
	}else{
		printf("Permissoes nao foram adicionadas.\n");
	}
}
printf("\n\nDHCP:%s", DHCP ? "true" : "false");
if(DHCP == true){
	printf("\n DNS: ");
	for(x=0; x<4; x++){
			printf("%d.", DNS[x]);
		}
	printf("\n Faixa de IP: ");
	printf("%d.%d.%d.%d", IP1, IP2, IP3, IP4);
	printf("\n Gateway: ");
	printf("%d.%d.%d.%d", gateway1, gateway2, gateway3, gateway4);
}
printf("\n\nIOT:%s", IOT ? "true" : "false");

}
