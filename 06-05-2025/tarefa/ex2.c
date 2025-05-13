#include <stdio.h>

int main(){

    int n,i,j,c;

    printf("Entre com um número inteiro positivo:");
    scanf("%d",&n);

    i=1;
    while(i<=n){
        j=0;
        while(j<n){
            c=i*(j+1);
            printf("%4d",c);
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    return 0;
}