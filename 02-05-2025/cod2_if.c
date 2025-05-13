#include <stdio.h>

/*
2) Faça um programa C que convert1 um número de 1 a 7 para o respectivo dia da semana (ex: 1 = domingo, 2 = 2a feira, e assim por diante). Use o comando if else if
*/

int main(){
	
	int numero;
	
	printf("entre com um número de 1 à 7: ");
	scanf("%d",&numero);
	
	if(numero==1)
		printf("O número 1 é Domingo.\n");
	else if(numero==2)
		printf("O número 2 é Segunda-Feira.\n");
	else if(numero==3)
		printf("O número 3 é Terça-Feira.\n");
	else if(numero==4)
		printf("O número 4 é Quarta-Feira.\n");
	else if(numero==5)
		printf("O número 5 é Quinta-Feira.\n");
	else if(numero==6)	
		printf("O número 6 é Sexta-Feira.\n");
	else if(numero==7)	
		printf("O número 7 é Sabado.\n");
			
	return 0;
}
