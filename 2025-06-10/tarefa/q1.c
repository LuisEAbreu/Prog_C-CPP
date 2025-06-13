#include <stdio.h>

/*
1.Implementar uma função para realizar o produto escalar de 2 vetores de dimensão n. 
A função deve retornar o produto.
*/

void ler_vetor(int vet[],int n){
    for(int i=0;i<n;i++){
        printf("Entre com o valor para vet[%d]: ",i);
        scanf("%d",&vet[i]);
    }
}
int produto_escalar(int vet1[],int vet2[],int n){
    int p_e=0;

    for(int i=0;i<n;i++){
        p_e+=vet1[i]*vet2[i];
    }
    return p_e;
}

int main(){
    int n=5,vet1[5]={1,2,3,4,5},vet2[5]={2,4,6,8,10},p_e;

    /*
    printf("Qual a dimensão do vetor?\n");
    scanf("%d",&n);

    ler_vetor(vet1,n);
    ler_vetor(vet2,n);
    */

    p_e=produto_escalar(vet1,vet2,n);

    printf("O produto escalar entre o vet1[] e vet2[] é: %d.\n",p_e);

    return 0;
}