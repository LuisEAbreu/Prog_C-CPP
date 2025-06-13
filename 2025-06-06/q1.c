#include <stdio.h>

int main(){
	int n;
	float media, menor, maior;
	
	for(int i=0;i<10;i++){
		printf("Entre com o %d número: ", i+1);
		scanf("%d",&n);
		
		if(i==0){
			maior,menor=n;
		}
		else{
			if(n>maior)
				maior=n;
			else if(n<menor)
				menor=n;				
		}
	}
	media=(maior+menor)/2;
	printf("A média do maior número (%.2f) e do menor número (%.2f) é %.2f.\n",maior,menor,media);
	
	return 0;
}