#include <stdio.h>

void desenhaTopoOuBase(int largura){
	for(int i=1;i<=largura;i++)
		printf("#");
	printf("#\n");
}

void desenhaLaterais(int largura, int altura){
	for(int i=1;i<=altura-2;i++){
		printf("#");
		for(int j=0;j<largura-2;j++)
			printf(" ");
		printf("#\n");
	}
}

void desenhaRetangulo(int largura, int altura){
	desenhaTopoOuBase(largura);
	desenhaLaterais(largura,altura);
	desenhaTopoOuBase(largura);
}

int main(){
	int largura,altura;
	
	while(1){
		printf("Entre com a largura do retangulo: ");
		scanf("%d",&largura);
		
		if(largura<2){
			printf("A largura não pode ser menor do que 2.\n");
			break;
		}
		else if(altura<2){
			printf("A altura não pode ser menor do que 2.\n");
			break;
		}
				
		desenhaRetangulo(largura,altura);
	}
	return 0;
}
