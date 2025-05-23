#include <stdio.h>

/*
Faça um programa C que verifica se um número é perfeito. 
O programa deve repetir até que o usuário digite 0.

Obs: Um número perfeito é um número inteiro positivo que é igual 
à soma de todos os seus divisores próprios positivos (ou seja, divisores menores que ele mesmo).

Exemplo clássico: número 28

Divisores próprios de 28:

1, 2, 4, 7, 14

Soma:

1 + 2 + 4 + 7 + 14 = 28 ?  Perfeito! 
*/

int main(){
    int n,soma;

    do{
        soma=0;
        printf("Entre com um número: ");
        scanf("%d",&n);

        for(int i=1;i<n;i++){
            if(n%i==0)
                soma+=i;
            else
                continue;
        }

        if(soma==n)
            printf("O número %d é um número perfeito.\n",n);
        else
            printf("O número %d não é um número perfeito.\n",n);

    }while(n!=0);

    return 0;
}