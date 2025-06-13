#include <stdio.h>

/*
Implementar uma função no C que calcula o fatorial de um número passado como parâmetro.
Ela deve retornar o valor calculado ou -1 caso o número seja negativo.
*/

int fatorial(int n){
    int fat=n;

    if(n==0)
        return 1;
    else if(n>0){
        for(int i=1;i<n;i++){
            fat=fat*i;
        }
        return fat;
    }
    else
        return -1;
}

int main(){
    int n,fat;

    printf("Entre com um número: ");
    scanf("%d",&n);

    fat=fatorial(n);

    printf("O fatorial de %d é %d.\n",n,fat);
    
    return 0;
}