#include <stdio.h>

/*
2) Faça um programa C que convert1 um número de 1 a 7 para o respectivo dia da semana (ex: 1 = domingo, 2 = 2a feira, e assim por diante). Use o comando if else if
*/

int main(){
	
	int numero;
	
	printf("entre com um número de 1 à 7: ");
	scanf("%d",&numero);
	
	switch(numero){
	case 1:
			printf("O número 1 é Domingo.\n");
			break;
	case 2:
			printf("O número 2 é Segunda-Feira.\n");
			break;
	case 3:
			printf("O número 3 é Terça-Feira.\n");
			break;
	case 4:
			printf("O número 4 é Quarta-Feira.\n");
			break;	
	case 5:
			printf("O número 5 é Quinta-Feira.\n");
			break;	
	case 6:
			printf("O número 6 é Sexta-Feira.\n");
			break;
	case 7:
			printf("O número 7 é Sabado.\n");
			break;
	}
	return 0;
}
