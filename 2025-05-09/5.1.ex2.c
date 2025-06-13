#include <stdio.h>

int main()
{
  char num0;
  short num1;
  int num2;
  long int num3; 

  /* Leitura do número e 
     verificação se o número é negativo */

  printf ("tamanho de num0 = %ld bytes.\n", sizeof (num0));
  printf ("tamanho de num1 = %ld bytes.\n", sizeof (num1));
  printf ("tamanho de num2 = %ld bytes.\n", sizeof (num2));
  printf ("tamanho de num3 = %ld bytes.\n", sizeof (num3));
  
  return 0;
}