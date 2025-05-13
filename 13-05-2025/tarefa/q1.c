#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um programa C em que o computador gera um número aleatório entre 1 e 50, 
e o usuário tem no máximo 5 tentativas para adivinhar o número. Após cada tentativa, 
o programa deve informar se o número digitado é maior ou menor que o número sorteado.

Use for para controlar o número de tentativas e break para encerrar quando o número for adivinhado corretamente.
*/

#define N_TENTATIVAS 5

int main (){
    int i,segredo,sugestao;

    srand(time(NULL)); //iniciar semente

    segredo=rand()%50+1; //gerar o número secreto
        
    for(i=0;i<N_TENTATIVAS;i++){
    
        printf("Adivinhe um número entre 1 e 50: ");
        scanf("%d",&sugestao);

        if(segredo==sugestao)
            break;
        else if(segredo<sugestao)
            printf("O número secreto é menor\n");
        else
            printf("O número secreto é maior\n");
    }
    if(segredo!=sugestao)
        printf("Você excedeu o número de tentativas.\n");
    else if(i>1)
        printf("Parabéns! Você acertou com %d tentativas.\n",i++);
    else
        printf("Parabéns! Você acertou com %d tentativa.\n",i);
    return 0;
}