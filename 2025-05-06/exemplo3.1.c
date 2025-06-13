#include <stdio.h>

int main(){
    int n;

    printf("Entre com o valor de N:");
    scanf("%d",&n);

    while(n>=0){
        if(n%2==0){
            printf("%d\n",n);
        }
        n=n-1;
    }
}