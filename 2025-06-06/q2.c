#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


float menu_comprar_bilhetes(){
    int zona,quantidade;
    float preco,valor_total=0;

    printf("Qual a zona de destino?\n");
    printf("\n1 - Centro.\n");
    printf("\n2 - Subúrbio.\n");
    printf("\n3 - Periferia.\n");
    printf("\nEntre com a opção desejada:");
    scanf("%d",&zona);

    printf("Quantos bilhetes deseja comprar? ");
    scanf("%d",&quantidade);

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
    }
    valor_total=preco*quantidade;

    if(rand()%100<20){
            printf("Parabéns! Você foi contemplado com um 50 porcento de desconto!\n");
            valor_total=valor_total/2;
    }

    return valor_total;
}
void menu_total_bilhetes_vendidos(int total_bilhetes_vendidos){
    return;
}
void menu_total_dinheiro_arrecadado(int total_dinheiro_arrecadado){
    return;
}
void menu_n_clientes_premiados_valor_total_concedido(int total_dinheiro_arrecadado,int valor_total_desconto){
    return;
}

int main(){
    int n,
        total_bilhetes_vendidos=0,
        total_dinheiro_arrecadado=0,
        n_clientes_premiados=0,
        valor_total_desconto=0;

    do{
        printf("O que você 1deseja fazer?\n");
        printf("\n1 - Comprar bilhetes.\n");
        printf("\n2 - Exibir total de bilhetes vendidos.\n");
        printf("\n3 - Exibir total de dinheiro arrecadado.\n");
        printf("\n4 - Exibir numero de clientes premiados e valor total de desconto concedido.\n");
        printf("\n5 - Sair.\n");
        printf("\nEntre com a opção desejada:");
        scanf("%d",&n);

        switch(n){
            case 1:
                printf("O valor total é %.2f.\n",menu_comprar_bilhetes());
                break;
            case 2:
                menu_total_bilhetes_vendidos(total_bilhetes_vendidos);
                break;
            case 3:
                menu_total_dinheiro_arrecadado(total_dinheiro_arrecadado);
                break;
            case 4:
                menu_n_clientes_premiados_valor_total_concedido(total_dinheiro_arrecadado,valor_total_desconto);
                break;
            case 5:
                break;
            default:
                printf("Opção não reconhecida, tente novamente.");
        }
    }while(n!=5);

    return 0;
}