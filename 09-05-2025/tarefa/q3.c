#include <stdio.h>

/*
Faça um programa C  que leia notas entre 0 e 10 e calcule a média. 
Encerrar com -1. Ignore valores inválidos.
*/

int main(){
    int n,contador=0;
    float soma=0,media;

    do{
        printf("Entre com uma nota entre 0 e 10: ");
        scanf("%d",&n);
        if(n>=0){
            soma=soma+n;
            contador+=1;
        }
    }while(n>=0);

    if(contador>0){
        media=soma/contador;
        printf("Foram inseridos %d números e a média deles é igual a: %.2f.\n",contador,media);
    }
    else
        printf("Não foram inseridos valores válidos.\n");

    return 0;
}