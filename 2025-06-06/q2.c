#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int menu_zona_destino(){
    int zona;
    float preco;

    do{
        printf("\nQual a zona de destino?\n");
        printf("\n1 - Centro.\n");
        printf("\n2 - Subúrbio.\n");
        printf("\n3 - Periferia.\n");
        printf("\nEntre com a opção desejada: ");
        scanf("%d",&zona);

        switch(zona){
            case 1:
                preco=4.5;
                break;
            case 2:
                preco=6;
                break;
            case 3:
                preco=7.5;
                break;
            default:
                printf("\nOpção não reconhecida, tente novamente.\n");
        }
    }while(zona!=1 && zona!=2 && zona!=3);

    return preco;
}

int menu_quantidade_bilhetes(){
    int quantidade;

    printf("\nQuantos bilhetes deseja comprar? ");
    scanf("%d",&quantidade);

    return quantidade;
}

int desconto_aleatorio(){

    srand(time(NULL));
    int porcentagem=rand()%100;

    if(porcentagem<20){
        printf("\nParabéns! Você foi contemplado com 50 porcento de desconto!\n");
        return 1;
    }
    else
        return 0;
}

int main(){
    int n,
        total_bilhetes_vendidos=0,
        total_dinheiro_arrecadado=0,
        n_clientes_premiados=0,
        zona,
        quantidade;
    float preco,
          valor_total_desconto=0,
          porcentagem,
          valor_total=0;    

    do{
        printf("\nO que você deseja fazer?\n");
        printf("\n1 - Comprar bilhetes.\n");
        printf("\n2 - Exibir total de bilhetes vendidos.\n");
        printf("\n3 - Exibir total de dinheiro arrecadado.\n");
        printf("\n4 - Exibir numero de clientes premiados e valor total de desconto concedido.\n");
        printf("\n5 - Sair.\n");
        printf("\nEntre com a opção desejada: ");
        scanf("%d",&n);

        switch(n){
            case 1:
                preco=menu_zona_destino();
                quantidade=menu_quantidade_bilhetes();

                total_bilhetes_vendidos+=quantidade;
                valor_total=preco*quantidade;

                if(desconto_aleatorio()==1){
                    n_clientes_premiados+=1;
                    valor_total=valor_total/2;
                }
                total_dinheiro_arrecadado+=valor_total;

                printf("\nO valor total para %d bilhetes é R$%.2f.\n",quantidade,valor_total);
                break;
            case 2:
                printf("\nO total de bilhetes vendidos é %d.\n",total_bilhetes_vendidos);
                break;
            case 3:
                printf("\nO total de dinheiro arrecadado é R$%d.\n",total_dinheiro_arrecadado);
                break;
            case 4:
                printf("\nO número de clientes premiados foi %d e o total de desconto concedido foi R$%.2f.\n",n_clientes_premiados,valor_total_desconto);
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção não reconhecida, tente novamente.\n");
        }
    }while(n!=5);

    return 0;
}