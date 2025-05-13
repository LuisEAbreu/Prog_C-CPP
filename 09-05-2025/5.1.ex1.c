#include <stdio.h>

int main()
{
  int N,i,FAT;

  /* Leitura do número e 
     verificação se o número é negativo */

  do {
    printf("Entre com o valor de N\n");
    scanf ("%d", &N);
    if (N<0)
       printf("Número negativo...");
  } while (N<0);

  /* computação do fatorial */
  i=N;
  FAT=1;
  while(i>1) {
      FAT=FAT*i;
      i=i-1;
  } 
  printf("Valor de FAT  de %d é %d\n", N, FAT);
  return 0;
}