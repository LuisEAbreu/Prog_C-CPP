#include <stdio.h>

/*
    Implemente um programa em C que percorre um intervalo [a,b],
com passo dx = 0.01, e determina o valor máximo e mínimo positivos da função f(x).
    Use continue para ignorar valores negativos ou nulos da função.
    A função é f(x)=x2- 4x+3 e deve SER implementada como uma função do C onde x é 
passado como parâmetro e o retorno é o valor da função. 
    O intervalo é fornecido como entrada e  deve ser válido, ou seja a,b reais sendo b>a. 
    Solicitar uma nova entrada caso isso não seja atendido.
*/

#define FUNCAO x*x-4*x+3

float determina_valor_maximo(float a, float b){
    float fx,x,max;
    x=a;
    fx=FUNCAO;
    max=fx;

    for(x=a;x<=b;x+=0.01){
        fx=FUNCAO;

        if(fx<=0)
            continue;
        else if(fx>max)
            max=fx;
    }
    return max;
}

float determina_valor_minimo(int a, int b){
    float fx,x,min;
    x=a;
    fx=FUNCAO;
    min=fx;

    for(x=a;x<=b;x+=0.01){
        fx=FUNCAO;

        if(fx<=0)
            continue;
        else if(fx<min)
            min=fx;
    }
    return min;
}

int main(){
    float a,b,max,min;

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

    max=determina_valor_maximo(a,b);
    min=determina_valor_minimo(a,b);
    
    printf("O ponto mínimo de f(x) é %.2f.\n",min);
    printf("O ponto máximo de f(x) é %.2f.\n",max);
    
    return 0;
}   