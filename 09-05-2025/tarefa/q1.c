#include <stdio.h>

/*
Faça um programa C em que o usuário deve digitar números inteiros positivos. 
O programa continua pedindo até que ele digite um número negativo. 
Ao final, o programa exibe a soma dos números digitados.
*/

int main(){
    int n,soma;

    soma=0;

    do{
        printf("Entre com um número inteiro positivo:");
        scanf("%d",&n);
        if(n>0)
            soma=soma+n;
    } while (n>=0);
    
    printf("A soma dos números digitados é: %d.\n",soma);

    return 0;
}