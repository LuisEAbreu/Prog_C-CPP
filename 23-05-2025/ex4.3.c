#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* definição da função soma de dados
   Sinopse: Esta função ....
   Parâmetros  de Entrada: não tem
   Saída: soma da jogada randômica de 2 dados
   Autor: ....
   Versão:
*/

int somar_dois_dados()
{
    int dado1, dado2, soma;

    dado1 =  rand() % 6 + 1;
    dado2 =  rand() % 6 + 1;
    soma = dado1 + dado2;
    return soma;
}

int main ()
{
      int teste;

      /* iniciar semente: */
      srand ( time(NULL) );

      teste = somar_dois_dados();
      printf("Valor da jogada de dados é %d\n", teste);
      return 0;
}