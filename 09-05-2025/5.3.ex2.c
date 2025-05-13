// exemplo de geração randômica
// extracted and adapted from www.stackoverflow.com 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
      int segredo, sugestao, tentativa;

      tentativa=0;

      /* iniciar semente: */
      srand ( time(NULL) );

      /* gerar o número secreto: */
      segredo = rand() % 10 + 1;

      do {
          printf ("Adivinhe um número entre (1 a 10): ");
          scanf ("%d",&sugestao);
          tentativa=tentativa+1;
          if (segredo<sugestao){ 
              printf ("O número secreto é menor\n");
          }
          else if (segredo>sugestao){ 
              printf ("O número secreto é maior\n");
          }
      } while (segredo!=sugestao && tentativa<3);

      if(segredo==sugestao)
        printf ("Parabéns!\n");
      else
        printf("Você excedeu o número de tentativas.\n");
      return 0;
}