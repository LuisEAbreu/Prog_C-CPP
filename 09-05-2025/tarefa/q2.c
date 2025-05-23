#include <stdio.h>

/*
Faça um programa C  que solicite ao usuário que digite a senha até que ele acerte. 
A senha correta é 1234. Caso errada, uma mensagem de senha inválida deve ser dada.
*/

#define SENHA 1234

int main(){
    int senha;

    do{
        printf("Entre com a senha: ");
        scanf("%d",&senha);
        if(senha!=SENHA)
            printf("Senha incorreta, tente novamente.\n");
    }while(senha!=SENHA);

    printf("Acesso liberado!\n");

    return 0;
}