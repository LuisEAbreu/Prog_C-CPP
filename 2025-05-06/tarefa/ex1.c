#include <stdio.h>

int main(){
    int i,j,n;

    printf("Entre com um número inteiro positivo:");
    scanf("%d",&n);
    
    i=1;
    while(i<=n){
        j=0;
        while(j<(n-i)){
            printf(" ");
            j=j+1;
        }
        j=0;
        while(j<(2*i-1)){
            printf("*");
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }

    return 0;
}