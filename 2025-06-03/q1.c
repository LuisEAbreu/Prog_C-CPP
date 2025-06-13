#include <stdio.h>

/*
Faça uma função para computar uma aproximação da função exponencial através dos N primeiros termos de:

e^x = somatório de n=0 até infinito de x^n/n!
*/

float expon(float x, int n){
	float exp=x;
	if(n<=0)
		return 1;
	else if(n>0){
		for(int i=0;i<n;i++){
			exp=exp*x;
		}
		return exp;
	}
}

int fat(int n){
	int fat=n;
	
	if(n<=0)
		return 1;
	else if(n>0){
		for(int i=1;i<n;i++){
			fat=fat*i;
		}
		return fat;
	}
}

float func_exp(int x, int N){
	int n;
	float soma=0;
	
	for(n=0;n<N;n++){
		soma+=expon(x,n)/fat(n);
	}
	return soma;
}

int main(){
    int x=4.5,n=5;
	float valor;
	
	valor=func_exp(x,n);
	/*
    4,5⁰/0! = 1/1 = 1
    4,5¹/1! = 4,5/1 = 4,5
    4,5²/2! = 20,25/2 = 10,125
    4,5³/3! = 91,125/6 = 15,1875
    4,5⁴/4! = 410,0625/24 = 17,086

    1+4,5+10,125+15,1875+17,086=47,8985
	*/
	printf("%.2f\n",valor);
	
	return 0;
}