#include <stdio.h>

/*
Implemente um sistema de autenticação contínuo que funcione da seguinte forma:

*    Existem três usuários fixos, identificados por user_id e senha:

        Usuário 1 ? user_id = 1, senha = 1234
        Usuário 2 ? user_id = 2, senha = 5678
        Administrador ? user_id = 0, senha = 0000
 *Usuários 1 e 2:
        Têm até 3 tentativas consecutivas antes de serem bloqueados.
        Após o bloqueio, só podem ser desbloqueados pelo administrador.
 *   O administrador (user_id = 0) pode desbloquear um usuário digitando:
        Seu próprio user_id = 0 e senha 0000
        Depois o user_id do usuário a ser desbloqueado
 *   O sistema deve ignorar:
        user_id inválido
        senhas com menos de 4 dígitos
        (use continue)

    O sistema nunca termina. É um loop infinito.
*/

#define NUMERO_TENTATIVAS 3
#define SENHA1 1234
#define SENHA2 5678
#define SENHA_ADM 0000

int main(){
	int i,user_id,senha,flag1=0,flag2=0,aux;

	while(1){
		printf("Entre com seu usuário: ");
		scanf("%d",&user_id);
		
		switch(user_id){
		case 1:
			if(flag1==0){
				for(i=0;i<NUMERO_TENTATIVAS;i++){
					printf("Entre com a senha: ");
					scanf("%d",&senha);
					if(senha/1000<1 || senha/1000>10){ //Dar uma olhada na verificação de dígitos
						printf("A senha deve conter 4 dígitos.\n");
						continue;
					}
					else if(senha==SENHA1){
						printf("Acesso concedido.\n");
						break;
					}
				}
				if(senha!=SENHA1)
					flag1=1;
			}
			else
				printf("Você excedeu o número de tentativas, seu usuário foi bloqueado.\nEntre em contato com o administrador para desbloquear seu usuário.\n");
							
			break;

		case 2:
			if(flag2==0){
				for(i=0;i<NUMERO_TENTATIVAS;i++){
					printf("Entre com a senha: ");
					scanf("%d",&senha);
					if(senha/1000<1 || senha/1000>10){ //Dar uma olhada na verificação de dígitos
						printf("A senha deve conter 4 dígitos.\n");
						continue;
					}
					else if(senha==SENHA2){
						printf("Acesso concedido.\n");
						break;
					}
				}
				if(senha!=SENHA2)
					flag2=1;
			}
			else
				printf("Você excedeu o número de tentativas, seu usuário foi bloqueado.\nEntre em contato com o administrador para desbloquear seu usuário.\n");
							
			break;

		case 0:
			do{
				printf("Entre com a senha: ");
				scanf("%d",&senha);
			}while(senha!=SENHA_ADM);

			do{
				printf("Qual usuário você deseja desbloquear?\n");
				scanf("%d",&aux);
			}while(aux!=1 && aux!=2);
			
			switch(aux){
				case 1:
					flag1=0;
					break;
				case 2:
					flag2=0;
					break;
			}
			break;
		default:
			printf("Usuário inválido.\n");
			break;
		}
	}
	
	return 0;
}