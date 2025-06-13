#include <stdio.h>

/*
Fazer um programa C para ler 20 números e verifcar se são primos apresentando a contagem de ocorrÊncia ao final.
Os números devem serr maiores que 0 (gnorar e ler novamente usando "continue").
Use continue também para para ignorar os que não forem primos.

Obs: o break pode ser usado conjuntamente com um flag para encerrar o loop de determinação de número primo.
*/

int main(){

    int primo,n;
    float soma=0;

    for(int i=0;i<20;i++){

        do{
        printf("Entre com um %dº número: ",i+1);
        scanf("%d",&n);
        }while(n<=0);
        
        primo=1;

        for(int j=2;j<=n/2;j++){
            if(n%j==0){
                primo=0;
                break;
            }
        }

        if(primo==1)
            soma=soma+n;
        else
            continue;
    }
    printf("%.2f\n",soma);
    return 0;
}