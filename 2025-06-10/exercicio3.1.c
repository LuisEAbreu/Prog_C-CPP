#include <stdio.h>

/*
Implementar um programa C para ler 10 números inteiros para um vetor e imprimir a quantidade (o número) 
de números acima da média.

OBS: Definir um contador, iniciado em zero. Ler os 10 números para um vetor e calcular a media. 
Fazer um segundo loop sobre o vetor testando cada item para verificar se é maior que a média. 
Incrementar o contador a cada item acima da média.
*/

int main(){
    int qtd=0,soma=0,vet[10]={2,4,6,8,10,12,14,16,18,20};
    float media;

    for(int i=0;i<10;i++){
        soma+=vet[i];
    }

    media=soma/10.0;

    for(int i=0;i<10;i++){
        if(vet[i]>media)
            qtd+=1;
    }

    printf("A quantidade de números acima da média é: %d\n.",qtd);
    return 0;
}