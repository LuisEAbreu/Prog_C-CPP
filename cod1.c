#include <stdio.h>

/*
1) Uma empresa irá ajustar o salário de seus funcionários de acordo com a categoria de trabalho dos funcionários: CAT A (10% de aumento), CAT B (15% de aumento) e CAT C (20% de aumento). Faça um programa que leia o plano de trabalho e o salário atual de um funcionário e calcula e imprime o seu novo salário. Use o comando switch.
*/

int main(){
	
	char categoria;
	float salario,salario_atual; 
		
	printf("Entre com a categoria de trabalho do funcionário:");
	scanf("%c",&categoria);
	
	printf("Entre com o salário do funcionário:");
	scanf("%f",&salario);
	
	switch(categoria){
	case 'A':
	case 'a':
				salario_atual=salario*1.1;
				printf("O salário atual é R$%.2f.\n",salario_atual);
				break;
	case 'B':
	case 'b':
				salario_atual=salario*1.15;
				printf("O salário atual é R$%.2f.\n",salario_atual);
				break;
	case 'C':
	case 'c':
				salario_atual=salario*1.2;
				printf("O salário atual é R$%.2f.\n",salario_atual);
				break;
	}

	return 0;
}
