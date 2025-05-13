#include <stdio.h>

/*
Escreva um programa C que peça ao usuário para digitar até 10 números positivos.
Se o usuário digitar um número negativo, pare imediatamente o loop e exiba quantos 
números positivos foram digitados antes disso.
*/

int main(){

    int i,n;

    printf("Entre com até 10 números positivos.\n");

    for(i=0;i<10;i++){
        printf("Entre com o número %d: \n",i+1);
        scanf("%d",&n);
        if(n<0){
            break;
        }
    }
    if(i==0)
        printf("Não foram digitados números positivos.\n");
    else if(i==1){
        printf("Foi digitado %d número positivo.\n",i);
    }
    else
        printf("Foram digitados %d números positivos.\n",i);
    return 0;
}