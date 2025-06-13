#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void adicionar_usuario(){
	int opcao;
	
	do{
		printf("\nO que você deseja fazer?\n\n");
		printf("Tecle 1 para Cadastrar Nome e E-mail.\n");
		printf("Tecle 2 para Definir Grupo do Usuário.\n");
		printf("Tecle 3 para voltar ao menu anterior.\n");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				printf("\nCadastrando nome...\n");
				sleep(3);
				printf("\nCadastrando e-mail...\n");
				sleep(3);
				printf("\nUsuário adicionado.\n");
				sleep(1);
				break;
			case 2:
				printf("\nDefinindo grupo do usuário...\n");
				sleep(3);
				printf("\nGrupo do usuário definido.\n");
				sleep(1);
				break;
			case 3:
				printf("\nVoltando ao menu anterior...\n");
				sleep(2);
				break;
			default:
				printf("\nOpção não identificada, tente novamente.\n");
			}
	}while(opcao!=3);
	return;
}

void remover_usuario(){
	printf("\nRemovendo usuário...\n");
	sleep(3);
	printf("\nUsuário removido.\n");
	sleep(1);
	
	return;
}

void adicionar_sala(){
	int opcao;
	
	do{
		printf("\nO que você deseja fazer?\n\n");
		printf("Tecle 1 para Definir Nome da Sala.\n");
		printf("Tecle 2 para Definir Capacidade da Sala.\n");
		printf("Tecle 3 para voltar ao menu anterior.\n");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				printf("\nDefinindo nome da sala...\n");
				sleep(3);
				printf("\nNome da sala definido.\n");
				sleep(1);
				
				break;
			case 2:
				printf("\nDefinindo capacidade da sala...\n");
				sleep(3);
				printf("\nCapacidade da sala definida.\n");
				sleep(1);
				break;
			case 3:
				printf("\nVoltando ao menu anterior.\n");
				sleep(2);
				break;
			default:
				printf("\nOpção não identificada. Tente novamente.\n");
			}
	}while(opcao!=3);
	return;
}

void remover_sala(){
	printf("\nRemovendo sala...\n");
	sleep(3);
	printf("\nSala removida.\n");
	sleep(1);
	return;
}

void gerenciar_usuarios(){
	int opcao;
	
	printf("\nMenu de gerenciamento de usuários.\n");
	
	do{
		printf("\nO que você deseja fazer?\n\n");
		printf("Tecle 1 para Adicionar Usuário.\n");
		printf("Tecle 2 para Remover Usuário.\n");
		printf("Tecle 3 para Sair do Gerenciar Usuários.\n");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				adicionar_usuario();
				break;
			case 2:
				remover_usuario();
				break;
			case 3:
				printf("\nSaindo do Gerenciador de Usuários...\n");
				sleep(2);
				break;
			default:
				printf("\nOpção não identificada. Tente novamente.\n");
			}
	}while(opcao!=3);
	return;
}

void gerenciar_salas(){
	int opcao;
	
	printf("\nMenu de gerenciamento de salas.\n");
	
	do{
		printf("\nO que você deseja fazer?\n\n");
		printf("Tecle 1 para Adicionar Sala.\n");
		printf("Tecle 2 para Remover Sala.\n");
		printf("Tecle 3 para Sair do Gerenciar Salas.\n");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				adicionar_sala();
				break;
			case 2:
				remover_sala();
				break;
			case 3:
				printf("\nSaindo do Gerenciador de Salas...\n");
				sleep(2);
				break;
			default:
				printf("\nOpção não identificada. Tente novamente.\n");
			}
	}while(opcao!=3);
	return;
}

int main(){
	int opcao;
	
	do{
		printf("\nO que você deseja fazer?\n\n");
		printf("Tecle 1 para Gerenciar Usuários.\n");
		printf("Tecle 2 para Gerenciar Salas.\n");
		printf("Tecle 3 para Sair.\n");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				gerenciar_usuarios();
				break;
			case 2:
				gerenciar_salas();
				break;
			case 3:
				printf("\nSaindo...\n");
				break;
			default:
				printf("\nOpção não identificada. Tente novamente.\n");
		}
	}while(opcao!=3);

	return 0;
}