#include <stdio.h>

/*
Implemente um programa em C que calcule a derivada numerica da função
f(x)=3x^2+2x-5
em um ponto x0 informado pelo usuário, utilizando o método da diferença progressiva:
f'(x0)~(f(x0+h)-f(x0))/h
O usuário também deverá fornecer o valor de h (passo).
*/

int main(){
    float a,b,fx,x,max,min;

    printf("Considerando um intervalo [a,b].\n");

    do{
        printf("Entre com a: ");
        scanf("%f",&a);
        printf("Entre com b: ");
        scanf("%f",&b);
        if(b<a){
            printf("O b fornecido é menor do que o a.\n");
        }
    }while(b<a);

    x=a;
    fx=x*x-4*x+3;
    min,max=fx;

    for(x=a;x<=b;x+=0.01){
        fx=x*x-4*x+3;

        if(fx<=0)
            continue;
        else if(fx<min)
            min=fx;
        else if(fx>max)
            max=fx;
    }
    printf("O ponto mínimo de f(x) é %.2f.\n",min);
    printf("O ponto máximo de f(x) é %.2f.\n",max);
    
    return 0;
} 