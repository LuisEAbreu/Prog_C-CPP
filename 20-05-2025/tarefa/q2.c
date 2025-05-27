#include <stdio.h>

/*
Implemente um programa em C que calcule a derivada numerica da função
f(x)=3x^2+2x-5
em um ponto x0 informado pelo usuário, utilizando o método da diferença progressiva:
f'(x0)~(f(x0+h)-f(x0))/h
O usuário também deverá fornecer o valor de h (passo).
*/

#define FUNCAO 3*x*x+2*x-5
#define DERIVADA (f(x0+h)-f(x0))/h

int main(){
    float x0,h,fx0,fx0h,flinha;

    printf("Entre com o ponto x0: ");
    scanf("%f",&x0);
    printf("Entre com o valor do passo (h): ");
    scanf("%f",&h);

    fx0=3*x0*x0+2*x0-5;
    fx0h=3*(x0+h)*(x0+h)+2*(x0+h)-5;

    flinha=(fx0h-fx0)/h;

    printf("A derivada numérica da função f(x) é %.2f.\n",flinha);
    
    return 0;
}   